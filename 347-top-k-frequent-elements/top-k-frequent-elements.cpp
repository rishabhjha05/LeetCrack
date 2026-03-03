class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq;
        for(int ele : nums)
            freq[ele]++;
        vector<vector<int>> vec;
        for(auto it: freq)
            vec.push_back({it.second,it.first});
        sort(vec.begin(),vec.end());
        vector<int> ans;
        int i=vec.size()-1;
        while(ans.size()<k)
            ans.push_back(vec[i--][1]);
        return ans;
    }
};