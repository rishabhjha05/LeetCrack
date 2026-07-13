class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long sum=0,mod=1e9+7;
        for(int ele : nums)
            sum+=ele;
        long long n=(sum/k);
        if(sum%k==0)
            n--;
        int mn=((n%mod)*((n+1)%mod)/2)%mod;
        return mn;
    }
};