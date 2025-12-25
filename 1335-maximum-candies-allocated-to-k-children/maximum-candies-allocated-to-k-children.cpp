class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long sum=0,ans=0;
        for(int ele : candies)
            sum+=ele;
        if(sum<k)
            return 0;
        else if(sum==k)
            return 1;
        long long low=1,high=sum/k;
        while(low<=high){
            long long mid=(low+high)/2,count=0;
            for(int ele : candies){
                count+=ele/mid;
            }
                if(count>=k){
                    ans=mid;
                    low=mid+1;
                }
            else
                high=mid-1;
        }        
        return ans;
    }
};