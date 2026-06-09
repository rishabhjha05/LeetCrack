class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long Tval=0,mx=INT_MIN,mn=INT_MAX;
       for(int i=0;i<nums.size();i++){
           mx=max(mx,(long long)nums[i]);
           mn=min(mn,(long long)nums[i]);
       }
        Tval+=k*(mx-mn);
        return Tval;
    }
};