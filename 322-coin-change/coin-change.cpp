class Solution {
public:
    unordered_map<int,int> dp;
    int find(vector<int>& coins,int amt){
        if(amt<0)
            return -1;
        else if(amt==0)
            return 0;
        else if(dp.count(amt))
            return dp[amt];
        int mn=INT_MAX;
        for(int ele : coins){
            if(ele<=amt){ 
                int coin=find(coins,amt-ele);
                if(coin!=-1)
                    mn=min(mn,1+coin);
            }
        }
        if(mn==INT_MAX) 
            dp[amt]=-1;
        else
            dp[amt]=mn;
        return dp[amt];
    }
    int coinChange(vector<int>& coins, int amount) {
        return find(coins,amount);
    }
};