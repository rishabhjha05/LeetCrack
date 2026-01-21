class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n=nums.size(),count=0;
        for(int i=1;i<n;i++)
            nums[i]+=nums[i-1];
        for(int ele : nums)
            if(ele==0)
                count++;
        return count;
        
    }
};