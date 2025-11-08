class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int i=0,j=0,n=grid.size();
        while(i<n && j<n){
            vector<int> vec;
            while(i<n && j<n){
                vec.push_back(grid[i][j]);
                i++,j++;
            }
            sort(vec.begin(),vec.end());
            i--,j--;
            for(int ele : vec){
                grid[i][j]=ele;
                i--,j--;
            }
            i+=2,j=0;
        }
        i=0,j=1;
        while(i<n && j<n){
            vector<int> vec;
            while(i<n && j<n){
                vec.push_back(grid[i][j]);
                i++,j++;
            }
            sort(vec.begin(),vec.end());
            i=0,j-=vec.size();
            for(int ele : vec){
                grid[i][j]=ele;
                i++,j++;
            }
            i=0,j-=vec.size();
            j++;
        }
        return grid;
    }
};