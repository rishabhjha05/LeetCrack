class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int ele : nums)
            freq[ele]++;
        int i=0,j=0,count=0,n=nums.size();
        while(j<n){
            while(j<n && nums[j]==nums[i])
                j++;
            if(freq[nums[i]]==j-i)
                count++;
            i=j;
        }
        return count;
    }
};