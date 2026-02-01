class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> h=heights;
        sort(h.begin(),h.end());
        int n=h.size(),count=0;
        for(int i=0;i<n;i++)
            if(h[i]!=heights[i])
                count++;
        return count;
    }
};