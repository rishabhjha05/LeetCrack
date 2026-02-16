class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        for(int l=0;l<n;){
            for(int idx=l+1;idx<n-2;){
                long long sum=target-1LL*(nums[l]+nums[idx]),i=idx+1,j=n-1;
                while(i<j){
                    long long s=nums[i]+nums[j];
                    if(s==sum){
                        vector<int> vec={nums[l],nums[idx],nums[i++],nums[j--]};
                        ans.push_back(vec);
                        while(i<n && nums[i]==nums[i-1])
                            i++;
                    }
                    else if(s<sum)
                        i++;
                    else
                        j--;
                }
                idx++;
                while(idx<n && nums[idx]==nums[idx-1])
                    idx++;
            }   
            l++;
            while(l<n && nums[l]==nums[l-1])
                l++;
        }
        return ans;
    }
};