class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_map<double,int> freq;
        sort(nums.begin(),nums.end());
        int n=nums.size(),i=0,j=n-1;
        while(i<=j){
            int mn=nums[i],mx=nums[j];
            double avg=(double)(mn+mx)/2;
            freq[avg]++;
            i++,j--;
        } 
        return freq.size();
    }
};