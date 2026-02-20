class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0),pre,suff(n,0);
        int sum=0;
        for(int ele : nums)
            pre.push_back(sum),sum+=ele;
        sum=0;
        for(int i=n-1;i>=0;i--)
            suff[i]+=sum,sum+=nums[i];
        for(int i=0;i<n;i++){
            ans[i]+=(i*nums[i]-pre[i]);
            ans[i]+=suff[i]-(n-i-1)*nums[i];
        }
        return ans;
    }
};