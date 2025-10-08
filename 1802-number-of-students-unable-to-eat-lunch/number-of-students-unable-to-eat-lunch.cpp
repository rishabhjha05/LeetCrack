class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwich) {

    queue<int> que;
    for (int ele : students)
        que.push(ele);
    int i = 0, n = sandwich.size(), count = 0;
    while (i < n && count != que.size())
    {
        if (que.front() == sandwich[i])
        {
            que.pop();
            count = 0, i++;
        }
        else
        {
            que.push(que.front());
            que.pop();
            count++;
        }
    }
    return que.size();
    }
};