class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int i=0,neg=0,nn=0,pos=0,n=nums.size();
        while(i<n && nums[i]<0)
            i++;
        neg=i;
        while(i<n && nums[i]==0)
            i++;
        nn=i-neg;
        pos=n-i;
        return max(neg,pos);
    }
};