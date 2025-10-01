class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int ele:nums)
            freq[ele]++;
        int n=nums.size()/2;
        for(auto i : freq) 
            if(i.second==n)
                return i.first;
        return 0;
    }
};