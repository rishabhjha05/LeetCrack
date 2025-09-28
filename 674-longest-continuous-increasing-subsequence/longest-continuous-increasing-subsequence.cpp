class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int len=-1,size=1,n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1])
                size++;
            else{
                len=max(len,size);
                size=1;
            }
        }
        len=max(len,size);
        if(len==-1)
            return n;
        return len;
    }
};