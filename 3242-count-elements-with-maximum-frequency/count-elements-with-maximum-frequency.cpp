class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> del;
        for(int ele:nums)
            freq[ele]++;
        int mx=-1,count=0;
        for(int ele:nums)
            mx=max(mx,freq[ele]);
        for(int ele:nums)
            if(freq[ele]==mx)
                count++;
        return count;
    }
};