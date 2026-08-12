class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p1=1,p2=1,n=nums.size(),i=0,noz=0;
        while(i<n)
        {
            if(nums[i]==0)
                noz++;
            p1*=nums[i];
            if(nums[i]!=0)
            p2*=nums[i];
            i++;
        }
        if(noz>1)
            p2=0;
        i=0;
        while(i<n)
        {
            if(nums[i]==0)
                nums[i]=p2;
            else
                nums[i]=p1/nums[i];
            i++;
        }
        return nums;
    }
};