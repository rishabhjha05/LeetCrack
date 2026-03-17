class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map<int,int> freq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(freq[nums[i]]==2)
                return 0;
            freq[nums[i]]++;
        }
        return 1; 
    }
};