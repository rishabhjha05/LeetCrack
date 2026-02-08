class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size(),i=n-2,count=0,sum=nums[n-1],m=1;
        while(i>=0){
            if(nums[i]>sum/m)
                count++;
            sum+=nums[i--],m++;
        }
        return count;
    }
};