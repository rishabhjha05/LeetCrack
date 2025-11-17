class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int> idx;
        int n=nums.size(),m;
        for(int i=0;i<n;i++)
            if(nums[i]==1)
                idx.push_back(i);
        m=idx.size();
        for(int i=1;i<m;i++)
            if(idx[i]<=idx[i-1]+k)
                return false;
        return true;

    }
};