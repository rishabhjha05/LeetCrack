class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> vec=arr;
        sort(vec.begin(),vec.end());
        unordered_map<int,int> rank;
        int r=1,n=arr.size();
        for(int ele : vec){
            if(rank[ele]==0)
                rank[ele]=r++;
        }
        for(int i=0;i<n;i++)
            arr[i]=rank[arr[i]];
        return arr;
    }
};