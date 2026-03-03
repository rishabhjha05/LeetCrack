class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        bool odd=nums[0]%2;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]%2==0 && odd)
                odd=0;
            else if(nums[i]%2==1 && !odd)
                odd=1;
            else
                return 0;
        }
        return 1;
    }
};