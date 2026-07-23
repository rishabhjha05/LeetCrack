class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int i=0,j=0,n=mat.size(),m=mat[0].size();
        while(ans.size()<(n*m)){
            cout<<"i : "<<i<<"  j : "<<j<<endl;
            while(i>=0 && j<m)
                ans.push_back(mat[i--][j++]);
            if(i<0 && j==m)
                i=1,j=m-1;
            else if(i<0)
                i=0;
            else if(j==m)
                j=m-1,i+=2;
            if(ans.size()==(n*m))
                break;
            cout<<"i : "<<i<<"  j : "<<j<<endl;
            while(i<n && j>=0)
                ans.push_back(mat[i++][j--]); 
            if(i==n && j<0)
                i=n-1,j=1;
            else if(j<0)
                j=0;
            else if(i==n)
                i=n-1,j+=2;
            
        }
        return ans;
    }
};