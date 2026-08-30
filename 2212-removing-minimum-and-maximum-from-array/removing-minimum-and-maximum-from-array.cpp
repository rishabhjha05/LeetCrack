class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size(),i=0,maxVal=INT_MIN,minVal=INT_MAX,res=INT_MAX,idx1,idx2;
        while(i<n){
            if(maxVal<nums[i]){
                maxVal=nums[i];
                idx1=i;
            }
            if(minVal>nums[i]){
                minVal=nums[i];
                idx2=i;
            }
            i++;
        }
        int minIdx=min(idx1,idx2),maxIdx=max(idx1,idx2);
        res=min(res,maxIdx+1);
        res=min(res,n-minIdx);
        res=min(res,(minIdx+1)+(n-maxIdx));
        return res;
    }
};