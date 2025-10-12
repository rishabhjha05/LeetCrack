class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=2,len=2,n=nums.size();
        for(int i=2;i<n;i++){
            if(nums[i-1]+nums[i-2]==nums[i])
                len++;
            else{
                ans=max(ans,len);
                len=2;
            }
        }
        ans=max(ans,len);
        return ans;
    }
};