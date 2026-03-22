class Solution {
public:
    void rotate(vector<vector<int>>& mat){
        int n=mat.size();
        vector<vector<int>> rmat(n,vector<int> (n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                rmat[j][n-i-1]=mat[i][j];
        }
        mat=rmat;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat==target)
            return 1;
        rotate(mat);
        if(mat==target)
            return 1;
        rotate(mat);
        if(mat==target)
            return 1;
        rotate(mat);
        if(mat==target)
            return 1;
        return 0;
    }
};