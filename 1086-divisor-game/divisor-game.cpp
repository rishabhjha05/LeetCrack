class Solution {
public:
    unordered_map<int,bool> dp;
    bool divisorGame(int n) {
        if(dp.count(n))
            return dp[n];
        for(int i=1;i<n;i++){
            if(n%i==0){
                if(!divisorGame(n-i))
                    return dp[n]= true;
            }
        }
        dp[n]= false;
        return dp[n];
    }
};