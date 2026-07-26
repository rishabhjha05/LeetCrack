class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<=n;i++){
            int j=0;
            while(j<n && nums[j]<i)
                j++;
            if(i==(n-j))
                return i;
        }
        return -1;
    }
};