class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        queue<int> q;
        bool mn=1;
        int n=nums.size();
        if(n==1)
            return nums[0];
        for(int i=0;i<n-1;i+=2){
            if(mn)
                q.push(min(nums[i],nums[i+1])),mn=0;
            else
                q.push(max(nums[i],nums[i+1])),mn=1;
        }
        while(q.size()>1){
            int a=q.front();
            q.pop();
            int b=q.front();
            q.pop();
            if(mn)
                q.push(min(a,b)),mn=0;
            else
                q.push(max(a,b)),mn=1;
        }
        return q.front();
    }
};