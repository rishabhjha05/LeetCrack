class Solution {
public:
    vector<vector<int>> dp;
    int func(int i,int j,string& s1,string& s2){
        if(i>=s1.size()||j>=s2.size())
            return 0;
        else if(dp[i][j]!=-1)
            return dp[i][j];
        else if(s1[i]==s2[j])
            return dp[i][j]=1+func(i+1,j+1,s1,s2);
        else
            return dp[i][j]=max(func(i+1,j,s1,s2),func(i,j+1,s1,s2));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size(),m=text2.size();
        dp.clear();
        dp.resize(n,vector<int>(m,-1));
        return func(0,0,text1,text2);
    }
};