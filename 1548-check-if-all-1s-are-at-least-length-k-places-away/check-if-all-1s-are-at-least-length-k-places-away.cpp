class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size(),cnt=0,i=0;
        while(i<n && nums[i]!=1)
            i++;
        i++;
        for(i;i<n;i++){
            if(nums[i]==1 && cnt>=k)
                cnt=0;
            else if(nums[i]==1 && cnt<k)
                return false;
            else
                cnt++;
        }
        return true;
    }
};