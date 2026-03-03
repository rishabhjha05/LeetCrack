class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> freq;
        int i=0,num=nums[i],n=nums.size();
        while(i<n){
            int len=0;
            while(i<n && nums[i]==num)
                len++,i++;
            freq.push_back({len,num});
            if(i<n)
                num=nums[i];
        }
        num=freq[0][0];
        int j=0,m=freq.size();
        while(j<m && freq[j][0]==num)
            j++;
        if(j==m)
            return {-1,-1};
        return 
            {freq[0][1],freq[j][1]};
    }
};