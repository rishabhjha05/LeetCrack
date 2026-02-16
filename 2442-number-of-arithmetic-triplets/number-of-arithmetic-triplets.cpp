class Solution {
public:
    bool found(vector<int>& nums,int num,int lo,int hi){
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(nums[mid]==num)  
                return 1;
            else if(nums[mid]<num)
                lo=mid+1;
            else
                hi=mid-1;
        }
        return 0;
    }
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n=nums.size(),count=0;
        for(int i=0;i<n-2;){
            if(found(nums,diff+nums[i],i+1,n-1)){
                if(found(nums,2*diff+nums[i],i+1,n-1))
                    count++;
            }
            i++;
            while(i<n && nums[i]==nums[i-1])
                i++;
        }
        return count;
    }
};