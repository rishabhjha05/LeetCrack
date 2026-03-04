class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size(),count,idx;
        map<int,int> freq,freqr;
        for(int i=0;i<m;i++){
            count=0,idx=-1;
            for(int j=0;j<n;j++)    
                if(mat[i][j]==1)
                    count++,freq[j]++,idx=j;
            if(count==1)
                freqr[i]=idx;
        }
        count=0;
        for(auto itr : freqr)
            if(freq[itr.second]==1)
                count++;
        return count;
    }
};