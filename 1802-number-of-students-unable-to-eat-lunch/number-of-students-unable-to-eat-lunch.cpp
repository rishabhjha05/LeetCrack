class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwich) {
        
    queue<int> que;
    for (int ele : students)
        que.push(ele);
    int count = 0,i=0,n=sandwich.size();
    while(i<n){
        if(count==que.size())
            return que.size();
        else if(que.front()==sandwich[i])
        {
            que.pop();
            count=0;
            i++;
        }
        else
        {
            que.push(que.front());
            que.pop();
            count++;
        }
    }
    return 0;
    }
};