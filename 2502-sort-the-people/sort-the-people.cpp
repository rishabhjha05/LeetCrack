class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=names.size();
        vector<int> help(n);
        vector<string> ans(n);
        for(int i=0;i<n;i++){
            int max=-1,idx=-1;
            for(int j=0;j<n;j++)
                if(max<heights[j])
                {
                    max=heights[j];
                    idx=j;
                }
            heights[idx]=-1;
            help[i]=idx;
        }
        for(int ele : help)
            cout<<ele<<" ";
        for(int i=0;i<n;i++)
            ans[i]=names[help[i]];
        return ans;
    }
};