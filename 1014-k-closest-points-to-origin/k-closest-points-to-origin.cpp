class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<long long,vector<int>>> q;
        for(vector<int> vec: points){
            q.push({pow(vec[0],2)+pow(vec[1],2),vec});
            if(q.size()>k)
                q.pop();
        }
        vector<vector<int>> ans;
        while(!q.empty())
            ans.push_back(q.top().second),q.pop();
        return ans;
    }
};