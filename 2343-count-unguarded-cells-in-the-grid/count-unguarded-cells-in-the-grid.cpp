class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> block(m,vector<int> (n,0));
        
        for(vector<int> vec : guards)
            block[vec[0]][vec[1]]=-1;
        for(vector<int> vec : walls)
            block[vec[0]][vec[1]]=1;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++){
                if(block[i][j]==-1)
                {
                    int r=i-1,c=j;
                    while(r>=0 && block[r][c]!=-1 && block[r][c]!=1){
                        block[r][c]=2;
                        r--;
                    }
                    r=i+1;
                    while(r<m && block[r][c]!=-1 && block[r][c]!=1){
                        block[r][c]=2;
                        r++;
                    }
                    r=i,c=j-1;
                    while(c>=0 && block[r][c]!=-1 && block[r][c]!=1){
                        block[r][c]=2;
                        c--;
                    }
                    c=j+1;
                    while(c<n && block[r][c]!=-1 && block[r][c]!=1){
                        block[r][c]=2;
                        c++;
                    }
                }
            }
        }
        int count=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(block[i][j]==0)
                    count++;
        return count;
    }
};