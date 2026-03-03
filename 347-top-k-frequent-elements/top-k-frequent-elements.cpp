class Solution {
public:
    typedef pair<int,int> pair;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq;
        for(int ele : nums)
            freq[ele]++;
        priority_queue< pair, vector<pair>, greater<pair>> pq;
        for(auto it: freq){
            pq.push({it.second,it.first});
            if(pq.size()>k)
                pq.pop();
        }
        vector<int> ans;
        while(pq.size()!=0)
            ans.push_back(pq.top().second),pq.pop();
        return ans;
    }
};