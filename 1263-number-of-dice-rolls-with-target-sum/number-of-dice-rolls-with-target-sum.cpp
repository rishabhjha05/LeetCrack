class Solution {
public:
    int mod=1e9+7;
    vector<vector<int>> dp;
    int find(int n,int k,int target){
        if(target<0|| (n==0&& target!=0))
            return 0;
        else if(target==0 && n==0)
            return 1;
        else if(dp[n][target]!=-1)
            return dp[n][target];
        int way=0;
        for(int i=1;i<=k;i++){
            way+=find(n-1,k,target-i)%mod;
            way%=mod;
        }
        return dp[n][target]=way;
    }
    int numRollsToTarget(int n, int k, int target) {
        dp.clear();
        dp.resize(31,vector<int>(1010,-1));
        return find(n,k,target);
    }
};