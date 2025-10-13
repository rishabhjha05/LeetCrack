class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size(),m=accounts[0].size(),ans=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int ele : accounts[i])
                sum+=ele;
            ans = max(ans,sum);
        }
        return ans;
    }
};