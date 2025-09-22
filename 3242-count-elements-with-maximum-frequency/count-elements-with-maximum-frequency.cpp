class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> del;
        for(int ele:nums)
            freq[ele]++;
        int mx=-1,count=0,i=1,n=nums.size();
        sort(nums.begin(),nums.end());
        del.push_back(nums[0]);
        while(i<n){
            while(i<n && nums[i]==nums[i-1])
                i++;
            if(i<n)
                del.push_back(nums[i++]);
        }
        
        for(int ele:del)
            mx=max(mx,freq[ele]);
        for(int ele:del)
            if(freq[ele]==mx)
                count++;
        return count*mx;
    }
};