class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size() && j<=i+k;j++){
                if(nums[i]==nums[j])
                    return true;
            }
        }
        return false;
    }
};