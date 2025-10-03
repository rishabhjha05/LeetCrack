class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        unordered_map<int,vector<int>> mp;
        int n=nums.size(),count=0;
        for(int i=0;i<n;i++)
            mp[nums[i]].push_back(i);
        for(auto itr:mp){
            int m=itr.second.size();
            for(int i=0;i<m-1;i++){
                for(int j=i+1;j<m;j++)
                    if((itr.second[i]*itr.second[j])%k==0)
                        count++;
            }
        }
        return count;
    }
};