class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0,sm=0,count=0,n=nums.size();
        for(int ele : nums)
            sum+=ele;
        for(int i=0;i<n-1;i++){
            sm+=nums[i],sum-=nums[i];
            if(abs(sum-sm)%2==0)
                count++;
        }
        return count;
    }
};