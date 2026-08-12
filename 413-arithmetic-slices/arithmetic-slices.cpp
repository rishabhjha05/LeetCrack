class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int i=0,j=1,n=nums.size(),ans=0;
        while(j<n){
            int d=nums[j]-nums[i],len=1;
            while(j<n && nums[j]-nums[j-1]==d)
                j++,len++;
            if(len>=3)
                ans+=((len-2)*(len-1))/2;
            i=j-1;
        }
        return ans;
    }
};