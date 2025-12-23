class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int ans=100,n=nums.size();
        for(int i=0;i<n;i++){
            int Or=nums[i];
            for(int j=i;j<n;j++){
                Or|=nums[j];
                if(Or>=k)
                    ans=min(ans,j-i+1);
            }
        }
        if(ans==100)
            return -1;
        return ans;
    }
};