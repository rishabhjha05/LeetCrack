class Solution {
public:
    unordered_map<int,int> dp;

    int find(int n){
        if(n<1) 
            return 0;
        else if(n==1)
            return 1;
        else if(dp.count(n))
            return dp[n];
        for(int i=1;i<n;i++)
            dp[n]=max({dp[n],i*find(n-i),i*(n-i)});
        return dp[n];
    }
    int integerBreak(int n) {
        return find(n);
    }
};