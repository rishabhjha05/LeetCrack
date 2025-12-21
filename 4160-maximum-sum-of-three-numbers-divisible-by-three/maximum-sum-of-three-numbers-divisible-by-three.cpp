class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int ans=0,s1=0,s2=0,s3=0,s4=0;
        unordered_map<int,vector<int>> md;
        for(int ele : nums)
            md[ele%3].push_back(ele);
        sort(md[0].begin(),md[0].end());
        sort(md[1].begin(),md[1].end());
        sort(md[2].begin(),md[2].end());
        int m=md[0].size(),n=md[1].size(),o=md[2].size();
        if(m>=3){
            s1+=md[0][m-1];
            s1+=md[0][m-2];
            s1+=md[0][m-3];
        }
        if(n>=3){
            s2+=md[1][n-1];
            s2+=md[1][n-2];
            s2+=md[1][n-3];
        }
        if(o>=3){
            s3+=md[2][o-1];
            s3+=md[2][o-2];
            s3+=md[2][o-3];
        }
        if(m>=1 && n>=1 && o>=1)
        {
            s4+=md[0][m-1];
            s4+=md[1][n-1];
            s4+=md[2][o-1];
        }
        ans=max(s1,s2);
        ans=max(ans,s3);
        ans=max(ans,s4);
        return ans;
    }
};