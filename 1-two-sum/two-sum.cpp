class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> idx;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int num=target-nums[i];
            if(idx.find(num)!=idx.end())
                return {idx[num],i};
            idx[nums[i]]=i;
        }
        return {};

    }
};