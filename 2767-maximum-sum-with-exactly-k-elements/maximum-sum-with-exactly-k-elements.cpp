class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int m=nums[nums.size()-1];
        m*=k;
        m+=((k-1)*k)/2;
        return m;
    }
};