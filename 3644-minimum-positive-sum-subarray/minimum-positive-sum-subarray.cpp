class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum=0,ans=INT_MAX,n=nums.size();
        for(int i=0;i<l&&i<n;i++){
            sum+=nums[i];
        }
        cout<<sum;
        for(int i=0;i<=n-l;i++){
            int sm=sum,j=i+l;
            while(j<n&&j-i+1<=r)
            {
                if(sm>0)
                    ans=min(sm,ans);
                sm+=nums[j];
                j++;
            }
            if(sm>0)
                ans=min(sm,ans);
            sum-=nums[i];
            if(i!=n-l)
                sum+=nums[i+l];
        }
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};