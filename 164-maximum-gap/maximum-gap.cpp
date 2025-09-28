class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size(),mx=-1;
        if(n<2)
            return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
            mx=max(mx,nums[i+1]-nums[i]);
        return mx;
    }
};