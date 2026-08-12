class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i=0,j=0,n=nums.size(),len=INT_MIN;
        unordered_map<int,int> freq;
        while(j<n){
            while(freq[nums[j]]==k)
                freq[nums[i++]]--;
            len=max(len,j-i+1);
            freq[nums[j++]]++;
        }
        return len;
    }
};