class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i=1,n=nums.size();
        while(i<n && nums[i]>=nums[i-1])
            i++;
        int l,h;
        if(i==n)
            l=0,h=n-1;
        else if(target<nums[n-1])
            l=i,h=n-1;
        else if(target>nums[n-1])
            l=0,h=i-1;
        else
            return 1;
        while(l<=h){
            int mid=(l+h)/2;
            if(target==nums[mid])
                return 1;
            else if(target<nums[mid])
                h=mid-1;
            else
                l=mid+1;
        }
        return 0;
    }
};