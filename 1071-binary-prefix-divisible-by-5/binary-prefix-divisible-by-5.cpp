class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        long long n=nums.size(),num=0,curr=0;
        vector<bool> ans(n,0);
        for(int i=0;i<n;i++){
            num=curr*2+nums[i];
            curr=num%5;
            if(curr==0)
                ans[i]=1;
        }
        return ans;
    }
};