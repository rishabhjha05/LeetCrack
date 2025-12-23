class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int> freq;
        for(int ele:target)
            freq[ele]++;
        for(int ele : arr)
            freq[ele]--;
        for(auto i: freq)
            if(i.second!=0)
                return false;
        return true;
    }
};