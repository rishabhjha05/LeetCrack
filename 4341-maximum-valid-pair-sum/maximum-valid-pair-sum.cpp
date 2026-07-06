class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n=nums.size(),mx=nums[n-1];
        vector<int> vec(n,-1);
        for(int i=n-k-1;i>=0;i--)
            mx=max(mx,nums[i+k]),vec[i]=mx;
        mx=-1;
        for(int i=0;i<=n-k-1;i++)
            mx=max(mx,vec[i]+nums[i]);\
        return mx;
    }
};
