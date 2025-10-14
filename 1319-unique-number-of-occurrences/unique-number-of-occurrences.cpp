class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        vector<bool> help(n,false);
        unordered_map<int,int> freq;
        for(int ele : arr)
            freq[ele]++;
        for(auto i: freq)
        if(!help[i.second])
            help[i.second]=true;
        else
            return false;
        return true;
    }
};