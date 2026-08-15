class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size(),zor=0,aur=0;
        for(int ele: nums){
            zor^=ele;
            aur|=ele;
        }
        if(!aur)
            return 0;
        else if(!zor)
            return n-1;
        return n;
    }
};