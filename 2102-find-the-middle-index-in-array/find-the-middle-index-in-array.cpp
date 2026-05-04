class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int> pre;
        int sum=0,n=nums.size();
        for(int ele : nums){
            pre.push_back(sum);
            sum+=ele;
        }
        for(int i=0;i<n;i++){
            if(sum-pre[i]-nums[i]==pre[i])
                return i;
        }
        return -1;
    }
};