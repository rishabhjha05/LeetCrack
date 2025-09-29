class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int ele: nums)
            cout<<ele<<" ";
        int n=nums.size();
        // if(nums[0]*nums[1]>nums[n-1]*nums[n-2])
        //     return nums[0]*nums[1]*nums[n-1];
        // else if(nums[n])
        //     return nums[n-1]*nums[n-2]*nums[n-3];
        return max(nums[0]*nums[1]*nums[n-1],nums[n-1]*nums[n-2]*nums[n-3]);
    }
};