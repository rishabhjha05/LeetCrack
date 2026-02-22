class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        int i=0,j=2,n=mountain.size();
        vector<int> ans;
        while(j<n){
            if(mountain[i+1]>mountain[i] && mountain[j]<mountain[i+1])
                ans.push_back(i+1);
            i++,j++;
        }
        return ans;
    }
};