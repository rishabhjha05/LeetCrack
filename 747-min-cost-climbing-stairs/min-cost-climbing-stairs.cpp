class Solution {
public:
    int ans(vector<int>& cost,int i,vector<int>& dp){
        if(i>=cost.size()-2)
            return cost[i];
        else if(dp[i]!=-1)
            return dp[i];
        dp[i]=cost[i]+min(ans(cost,i+1,dp),ans(cost,i+2,dp));
        return dp[i];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(),-1);
        return min(ans(cost,0,dp),ans(cost,1,dp));
    }
};