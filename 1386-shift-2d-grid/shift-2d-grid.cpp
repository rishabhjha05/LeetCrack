class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        while(k){
            for(int i=0;i<m;i++){
                for(int j=n-1;j>0;j--){
                    int temp=grid[i][j];
                    grid[i][j]=grid[i][j-1];
                    grid[i][j-1]=temp;
                }
            }
            for(int i=m-1;i>0;i--){
                int temp=grid[i][0];
                grid[i][0]=grid[i-1][0];
                grid[i-1][0]=temp;
            }
            k--;
        }
        return grid;
    }
};