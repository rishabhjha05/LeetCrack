class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int count=0,n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            unordered_map<int,int> freq;
            for(int j=i;j<n;j++){
                freq[nums[j]]++;
                sum+=nums[j];
                if(freq[sum]!=0)
                    count++;
            }
        }
        return count;
    }
};