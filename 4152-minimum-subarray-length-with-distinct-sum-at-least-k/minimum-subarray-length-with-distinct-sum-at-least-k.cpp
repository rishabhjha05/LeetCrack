class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int n=nums.size(),l=0,sum=0,ans=INT_MAX;
        unordered_map<int,int> freq;
        for(int r=0;r<n;r++){
            freq[nums[r]]++;
            if(freq[nums[r]]==1)
                sum+=nums[r];
            while(sum>=k){
                ans=min(ans,r-l+1);
                freq[nums[l]]--;
                if(freq[nums[l]]==0)
                    sum-=nums[l];
                l++;
            }
        }
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};