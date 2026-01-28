class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> pnt;
        for(vector<int> vec: points)
            pnt.push_back(vec[0]);
        sort(pnt.begin(),pnt.end());
        int ans=0,n=pnt.size();
        for(int i=1;i<n;i++)
            ans=max(ans,pnt[i]-pnt[i-1]);
        return ans;
    }
};