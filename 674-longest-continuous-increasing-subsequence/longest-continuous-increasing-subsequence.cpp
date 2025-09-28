class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int len=INT_MIN,size=1,n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1])
                size++;
            else{
                len=max(len,size);
                size=1;
            }
        }
        len=max(len,size);
        if(len==INT_MIN)
            return n;
        return len;
    }
};