class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> help=nums;
        sort(help.begin(),help.end());
        int n=nums.size(),x=help[n-1];
        if(help[n-1]>=2*help[n-2])
        {
            for(int i=0;i<n;i++)
                if(nums[i]==x)
                    return i;
        }
        return -1;

    }
};