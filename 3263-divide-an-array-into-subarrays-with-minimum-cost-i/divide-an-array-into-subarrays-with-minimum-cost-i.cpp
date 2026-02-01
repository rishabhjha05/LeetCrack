class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int sum=0;
        sum+=nums[0];
        sort(nums.begin(),nums.end());
        if(sum==nums[0])
            sum+=nums[1],sum+=nums[2];
        else if(sum==nums[1])
            sum+=nums[0],sum+=nums[2];
        else if(sum==nums[2])
            sum+=nums[0],sum+=nums[1];
        else
            sum+=nums[0],sum+=nums[1];  
        return sum;
    }
};