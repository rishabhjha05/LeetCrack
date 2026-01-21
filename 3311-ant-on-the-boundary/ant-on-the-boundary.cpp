class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n=nums.size(),count=0,var=0;
        for(int i=0;i<n;i++){
            var+=nums[i];
            if(var==0)
                count++;
        }
        return count;

    }
};