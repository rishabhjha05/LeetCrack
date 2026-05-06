class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum=0,n=nums.size();
        vector<int> pre,suff(n),ans;
        for(int ele : nums)
            pre.push_back(sum),sum+=ele;
        sum=0;
        for(int i=n-1;i>=0;i--)
            suff[i]=sum,sum+=nums[i];
        for(int i=0;i<n;i++)
            ans.push_back(abs(pre[i]-suff[i]));
        return ans;
    }
};