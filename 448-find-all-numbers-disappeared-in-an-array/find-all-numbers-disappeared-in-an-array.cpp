class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> num;
        int i=0;
        while(i<nums.size())
        {
            int correct_idx=nums[i]-1;
            if(nums[i]!=nums[correct_idx])
                swap(nums[i],nums[correct_idx]);
            else
            i++;
        }
        i=0;
        while(i<nums.size())
        {
            if(nums[i]!=i+1)
                num.push_back(i+1);
            i++;
        }
        return num;
    }
};