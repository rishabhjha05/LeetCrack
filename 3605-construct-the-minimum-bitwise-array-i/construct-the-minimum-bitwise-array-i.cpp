class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,-1);
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                int a=0,j=0,k=0,mask=1;
                while(nums[i]&mask)
                    mask<<=1,j++;
                while(nums[i]){
                    if(j!=1)
                        a+=(nums[i]&1)*pow(2,k);
                    k++,j--;
                    nums[i]>>=1;
                }
                ans[i]=a;
            }
        }
        return ans;
    }
};