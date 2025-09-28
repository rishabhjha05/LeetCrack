class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int len=INT_MIN;
        for(int i=0;i<nums.size();i++){
            int size=1,j=i+1;
            while(j<nums.size() && nums[j]>nums[j-1])
                size++,j++;
            len=max(len,size);
        }
        return len;
    }
};