class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n=nums.size()/2;
        for(int ele:nums){
            freq[ele]++;
            if(freq[ele]==n)
                return ele;
        }
        return 0;
    }
};