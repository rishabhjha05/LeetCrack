class Solution {
public:
    bool found(vector<int>& nums,int num,int lo,int hi){
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(nums[mid]==num)  
                return 1;
            else if(nums[mid]<num)
                lo=mid+1;
            else
                hi=mid-1;
        }
        return 0;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> uT;
        int n=nums.size();
        for(int idx=0;idx<n-2;){
            int sum=nums[idx],i=idx+1,j=n-1;
            while(i<j){
                int s=nums[i]+nums[j];
                if(s==(-1*sum)){
                    vector<int> vec={nums[idx],nums[i++],nums[j--]};
                    uT.insert(vec);
                }
                else if(s<-1*sum)
                    i++;
                else
                    j--;
            }
            while(idx<n && nums[idx]==sum)
                idx++;
        }
        vector<vector<int>> ans(uT.begin(),uT.end());
        return ans;
    }
};