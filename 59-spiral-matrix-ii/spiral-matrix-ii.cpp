class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> sol(n,vector<int>(n));

        int minrow=0,mincol=0,maxrow=n-1,maxcol=n-1,count=1;
        while(minrow<=maxrow && mincol<=maxcol)
        {
            for(int j=mincol;j<=maxcol && count<=n*n;j++)
                sol[minrow][j]=count++;
            minrow++;
            for(int i=minrow;i<=maxrow && count<=n*n;i++)
                sol[i][maxcol]=count++;
            maxcol--;
            for(int j=maxcol;j>=mincol && count<=n*n;j--)
                sol[maxrow][j]=count++;
            maxrow--;
            for(int i=maxrow;i>=minrow && count<=n*n;i--)
                sol[i][mincol]=count++;
                
            mincol++;
        }
        return sol;
    }
};