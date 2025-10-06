class Solution {
public:
    int calPoints(vector<string>& operations) {
        
    stack<int> record;
    int sum = 0;
    for (string str : operations)
    {
        if (str[0] == '+')
        {
            int a = record.top();
            record.pop();
            int b = record.top();
            record.push(a);
            record.push(a + b);
        }
        else if (str[0] == 'D')
            record.push(2 * record.top());
        else if (str[0] == 'C')
            record.pop();
        else
            record.push(stoi(str));
    }
    while(record.size())
    {
        sum += record.top();
        record.pop();
    }
    return sum;
    }
};