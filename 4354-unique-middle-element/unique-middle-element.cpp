class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int ele : nums)
            freq[ele]++;
        int n=nums.size();
        return freq[nums[n/2]]==1;
    }
};