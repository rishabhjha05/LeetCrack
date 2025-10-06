class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        int sum=0;
        for(string str : operations){
            if(str[0]=='+')
                record.push_back(record[record.size()-1]+record[record.size()-2]);
            else if(str[0]=='D')
                record.push_back(2*record[record.size()-1]);
            else if(str[0]=='C')
                record.pop_back();
            else
                record.push_back(stoi(str));
        }
        for(int ele : record)
            sum+=ele;
        return sum;
    }
};