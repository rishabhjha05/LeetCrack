class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size(),mx=nums[0],mn=nums[n-1];
        vector<int> pre,suf(n);
        for(int ele :nums){
            mx=max(mx,ele);
            pre.push_back(mx);
        }
        for(int i=n-1;i>=0;i--){
            mn=min(nums[i],mn);
            suf[i]=mn;
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            int num=pre[i]-suf[i];
            if(num<=k)
                return i;
        }
        return -1;
    }
};