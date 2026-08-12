class Solution {
public:
    unordered_map<int,int> dp;
    int moves(int n) {
        if(n==0)    
            return 0;
        else if(n==1)
            return 1;
        else if(dp.count(n))
            return dp[n];
        int ops=1+min(n%2+ moves(n/2),n%3+ moves(n/3));
        dp[n]=ops;
        return dp[n];
    }
    int minDays(int n) {
        return moves(n);
    }
};