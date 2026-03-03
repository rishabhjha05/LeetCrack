class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq;
        for(int ele : nums)
            freq[ele]++;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto it: freq){
            pq.push(it.second);
            if(pq.size()>k)
                pq.pop();
        }
        vector<int> ans;
        // while(pq.size()!=0){
        //     cout<<pq.top()<<" ";
        //     pq.pop();}
        while(pq.size()!=0){
            for(auto it: freq)
                if(pq.top()==it.second)
                    ans.push_back(it.first),pq.pop();
        }
        return ans;
    }
};