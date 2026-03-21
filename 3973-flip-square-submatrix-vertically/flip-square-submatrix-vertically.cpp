class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int t=k;
        for(int i=0;i<k/2;i++){
            int m=y;
            for(int j=0;j<k;j++){
                int temp=grid[x][y];
                grid[x][y]=grid[x+t-1][y];
                grid[x+t-1][y]=temp;
                y++;
            }
            y=m;
            x++;
            t-=2;
        }
        return grid;
    }
};