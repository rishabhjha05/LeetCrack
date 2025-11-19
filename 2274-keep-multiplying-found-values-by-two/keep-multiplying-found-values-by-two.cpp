class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        for(int ele : nums){
            if(ele==original)
                original*=2;
        }
        return original;
    }
};