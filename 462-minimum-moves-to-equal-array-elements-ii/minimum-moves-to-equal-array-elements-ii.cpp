class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),mid=nums[n/2],ans=0;
        for(int ele : nums)
            ans+=max(ele,mid)-min(ele,mid);
        return ans;
    }
};