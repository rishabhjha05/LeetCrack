class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> que;
        for(int ele : students)
            que.push(ele);
        int count=0,i=0,n=sandwiches.size();
        while(i<n && count!=que.size()){
            if(que.front()==sandwiches[i])
            {
                que.pop();
                i++,count=0;
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