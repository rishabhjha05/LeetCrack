class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            int j=i;
            if(nums[i]==0)
                ans[i]=0;
            else if(nums[i]>0)
            {
                int x=nums[i];
                while(x){
                    if(j==n-1)
                        j=0;
                    else
                        j++;
                    x--;
                }
                ans[i]=nums[j];
            }
            else
            {
                int x=abs(nums[i]);
                while(x){
                    if(j==0)
                        j=n-1;
                    else
                        j--;
                    x--;
                }
                ans[i]=nums[j];
            }
        }
        return ans;
    }
};