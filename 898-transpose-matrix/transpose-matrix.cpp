class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int r=matrix.size(),c=matrix[0].size();
        vector<vector<int>> sol(c,vector<int>(r));
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++)
                sol[i][j]=matrix[j][i];
        }
        return sol;
    }
    /*
    1,2,3
    4,5,6
    1,4
    2,5
    3,6
    */
};