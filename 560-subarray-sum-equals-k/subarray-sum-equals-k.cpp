class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0,n=nums.size(),count=0;
        for(int i=0;i<n;i++){
            int s=0;
            for(int j=i;j<n;j++){
                s+=nums[j];
                if(s==k)
                    count++;
            }
        }
        return count;
    }
};