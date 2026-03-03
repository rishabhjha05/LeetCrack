class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int,int> freq;
        int mn=INT_MAX,x=INT_MAX;
        for(int ele : nums){
            mn=min(ele,mn);
            freq[ele]++;
        }
        for(auto it: freq)
            if(it.second!=freq[mn])
                x=min(x,it.first);
        if(x!=INT_MAX)
            return {mn,x};
        return {-1,-1};

    }
};