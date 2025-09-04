class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size(),mx=INT_MIN,max_idx=-1;
        vector<int> sol;
        for(int i=0;i<k;i++)
            if(mx<nums[i])
            {
                mx=nums[i];
                max_idx=i;
            }
        sol.push_back(mx);
        for(int i=1;i<=n-k;i++){
            if(nums[i-1]==mx)
            {
                mx=INT_MIN;
                for(int j=i;j<k+i;j++)
                    if(mx<nums[j])
                    {
                        mx=nums[j];
                        max_idx=j;
                    }
            }
            else if(mx<nums[i+k-1])
            {
                mx=nums[i+k-1];
                max_idx=i+k-1;
            }
            sol.push_back(mx);
        }
        return sol;
    }
};