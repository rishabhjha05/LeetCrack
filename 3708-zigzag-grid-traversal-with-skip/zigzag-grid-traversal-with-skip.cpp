class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> ans;
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            int j=0;
            for(;j<m;j+=2)
                ans.push_back(grid[i][j]);
            i++;
            if(j==m)
                j=m-1;
            else
                j=m-2;
            for(;i<n && j>=0;j-=2)
                ans.push_back(grid[i][j]);
        }
        return ans;
    }
};