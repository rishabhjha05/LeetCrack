class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int mn=INT_MAX,idx=-1;
            for(int j=0;j<m;j++){
                if(mn>matrix[i][j])
                    mn=matrix[i][j],idx=j;
            }
            int mx=INT_MIN;
            for(int i=0;i<n;i++){
                if(mx<matrix[i][idx])
                    mx=matrix[i][idx];
            }
            if(mn==mx)
                ans.push_back(mx);
        }
        return ans;
    }
};