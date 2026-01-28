class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        int prev=bottom,n=special.size(),ans=-1;
        sort(special.begin(),special.end());
        ans=max(ans,special[0]-prev);
        prev=special[0];
        for(int i=0;i<n;i++){
            ans=max(ans,special[i]-prev-1);
            prev=special[i];
        }
        ans=max(ans,top-prev);
        return ans;
    }
};