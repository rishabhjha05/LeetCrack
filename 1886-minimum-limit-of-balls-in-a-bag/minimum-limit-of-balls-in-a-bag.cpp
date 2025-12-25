class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int mx=INT_MIN;
        for(int ele : nums)
            mx=max(mx,ele);
        int low=1,high=mx,ans=mx;
        while(low<=high){
            long long mid=(low+high)/2,ops=0;
            for(int ele: nums){
                // cout<<ceil((float)ele/mid)<<"\n";
                ops+=(ceil((double)ele/mid)-1);}
            if(ops<=maxOperations){
                cout<<ops;
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return ans;
    }
};