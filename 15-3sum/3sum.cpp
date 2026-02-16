class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        for(int idx=0;idx<n-2;){
            int sum=nums[idx],i=idx+1,j=n-1;
            while(i<j){
                int s=nums[i]+nums[j];
                if(s==(-1*sum)){
                    vector<int> vec={nums[idx],nums[i++],nums[j--]};
                    ans.push_back(vec);
                    while(i<n && nums[i]==nums[i-1])
                        i++;
                }
                else if(s<-1*sum)
                    i++;
                else
                    j--;
            }
            while(idx<n && nums[idx]==sum)
                idx++;
        }
        return ans;
    }
};