class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        unordered_set<int> s;
        for(int ele : arr)
            freq[ele]++;
        for(auto i: freq)
            if(s.find(i.second)!=s.end())
                return false;
            else
                s.insert(i.second);
        return true;
    }
};