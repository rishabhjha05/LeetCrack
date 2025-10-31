class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> freq;
        for(int ele : nums)
            freq[ele]++;
        for(auto i:freq)
            if(freq[i.first]!=1)
                ans.push_back(i.first);
        return ans;
    }
};