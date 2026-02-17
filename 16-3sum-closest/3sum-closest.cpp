class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),ans=0,diff=INT_MAX;
        for(int i=0;i<n-2;){
            int j=i+1,k=n-1,num=target-nums[i];
            while(j<k){
                int sum=nums[j]+nums[k];
                int d=abs(target-sum-nums[i]);
                if(d<diff)
                    ans=sum+nums[i],diff=d;
                if(sum<num)
                    j++;
                else if(sum>num)
                    k--;
                else
                    return target;
            }
            i++;
            while(i<n && nums[i]==nums[i-1])
                i++;
        }
        return ans;
    }
};