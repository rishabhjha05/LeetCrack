class Solution {
public:
    int loot(vector<int>& nums,vector<int>& dp,int i){
        if(i>=nums.size())
            return 0;
        else if(i==nums.size()-1)
            return nums[i];
        else if(dp[i]!=-1)
            return dp[i];
        dp[i]=max(nums[i]+loot(nums,dp,i+2),loot(nums,dp,i+1));
        return dp[i];  
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return loot(nums,dp,0);
    }
};