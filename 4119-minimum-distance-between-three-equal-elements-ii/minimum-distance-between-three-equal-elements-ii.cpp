class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int ans=INT_MAX,n=nums.size();
        unordered_map<int,vector<int>> freq;
        for(int I=0;I<n;I++){
            freq[nums[I]].push_back(I);
            if(freq[nums[I]].size()>=3){
                int m=freq[nums[I]].size(),i=freq[nums[I]][m-1],j=freq[nums[I]][m-2],k=freq[nums[I]][m-3];
                ans=min(ans,(abs(i-j)+abs(j-k)+abs(k-i)));
            }
        }
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};