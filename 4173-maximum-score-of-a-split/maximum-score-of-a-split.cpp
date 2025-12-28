class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        long long n=nums.size(),ans=LLONG_MIN,sum=0,mn=nums[n-1];
        vector<long long> pre(n-1),suff(n-1);
        for(int i=0;i<n-1;i++)
            sum+=nums[i];
        for(int i=n-2;i>=0;i--){
            suff[i]=mn;
            mn=min((long long)nums[i],mn);
            pre[i]=sum;
            sum-=nums[i];
            ans=max(ans,(pre[i]-suff[i]));
        }
        return ans;
    }
};