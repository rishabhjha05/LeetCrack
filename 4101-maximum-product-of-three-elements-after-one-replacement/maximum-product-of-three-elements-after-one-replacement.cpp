class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        long long p=1,n=nums.size();
        for(int i=0;i<n;i++)
            if(nums[i]<0)
                nums[i]*=-1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<3;i++)
            p*=nums[n-i];
        p*=1e5;
        return p;
    }
};