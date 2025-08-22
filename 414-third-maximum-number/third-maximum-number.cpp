class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=3,i=nums.size()-1;
        long mx=LONG_MAX;
        if(nums.size()>=3){
            while(count>0 && i>=0){
                if(mx>nums[i]){
                    mx=nums[i];
                    count--;
                }
                i--;
            }
            if(count==0)
                return mx;
        }
        return nums[nums.size()-1];
    }
};