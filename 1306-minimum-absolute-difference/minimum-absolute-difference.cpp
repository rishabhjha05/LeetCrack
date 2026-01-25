class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mn=INT_MAX,n=arr.size();
        for(int i=0;i<n-1;i++)
            mn=min(mn,abs(arr[i]-arr[i+1]));
        vector<vector<int>> ans;
        for(int i=0;i<n-1;i++)
            if(abs(arr[i]-arr[i+1])==mn)
                ans.push_back({arr[i],arr[i+1]});
        return ans;
    }
};