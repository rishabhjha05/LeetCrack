class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double ans=100000;
        sort(nums.begin(),nums.end());
        for(int ele: nums)
            cout<<ele<<" ";
        int n=nums.size(),i=0,j=n-1;
        for(int k=0;k<n/2;k++){
            int mn=nums[i],mx=nums[j];
            double avg=(double)(mn+mx)/2;
            ans=min(ans,avg);
            i++,j--;
        } 
        return ans;

    }
};