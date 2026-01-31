class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),i=1,j=n-2;
        while(i<n && nums[i-1]==nums[i])
            i++;
        while(j>=0 && nums[j]==nums[j+1])
            j--;
        if(i>j)
            return 0;
        return j-i+1;
    }
};