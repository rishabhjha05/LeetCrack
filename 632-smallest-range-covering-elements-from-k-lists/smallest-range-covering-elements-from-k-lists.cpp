class Solution {
public:
    typedef pair<int,pair<int,int>> pip;
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<pip,vector<pip>,greater<pip>> pq;
        int idx=0,mx=INT_MIN;
        for(vector<int> vec: nums)
            pq.push({vec[0],{idx,0}}),idx++,mx=max(mx,vec[0]);
        int mn=pq.top().first;
        int start=mn,end=mx;
        while(true){
            int r=pq.top().second.first;
            int c=pq.top().second.second;
            pq.pop();
            if(c==nums[r].size()-1)
                break;
            pq.push({nums[r][c+1],{r,c+1}});
            mx=max(mx,nums[r][c+1]);
            mn=pq.top().first;
            if((end-start)>(mx-mn))
                end=mx,start=mn;
        }
        return {start,end};
    }

};