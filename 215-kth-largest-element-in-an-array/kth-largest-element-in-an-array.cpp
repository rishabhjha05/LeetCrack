class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        for(int ele: nums)
            cout<<ele<<" ";
        return nums[nums.size()-k];
    }
};