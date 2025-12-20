class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs.size(),m=strs[0].size(),count=0;
        for(int i=0;i<m;i++){
            int val=97;
            for(int j=0;j<n;j++){   
                if((int)strs[j][i]<val){
                    count++;
                    break;
                }
                val=(int)strs[j][i];
            }
        }
        return count;

    }
};