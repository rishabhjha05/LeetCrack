class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<int> help(n);
        vector<string> ans(n);
        for(int i=1;i<=n;i++){
            int max=-1,idx=-1;
            for(int j=0;j<n;j++)
                if(max<score[j])
                {
                    max=score[j];
                    idx=j;
                }
            score[idx]=-1;
            if(i==1)
                ans[idx]="Gold Medal";
            else if(i==2)
                ans[idx]="Silver Medal";
            else if(i==3)
                ans[idx]="Bronze Medal";
            else
                ans[idx]=to_string(i);
        }
        return ans;
    }
};