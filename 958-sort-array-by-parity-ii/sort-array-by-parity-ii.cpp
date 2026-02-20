class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size(),i=0,j=1;
        vector<int> ans(n);
        sort(nums.begin(),nums.end());
        for(int ele : nums){
            if(ele%2==0)
                ans[i]=ele,i+=2;
            else
                ans[j]=ele,j+=2;
        }
        return ans;
    }
};