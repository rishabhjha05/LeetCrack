class Solution {
public:
    double average(vector<int>& salary) {
        int mx=INT_MIN,mn=INT_MAX,n=salary.size();
        double avg=0;
        for(int ele : salary)
            mx=max(mx,ele),mn=min(mn,ele),avg+=ele;
        for(int ele : salary)
            if(ele==mx || ele==mn)
                n--,avg-=ele;
        return avg/n;

        
    }
};