class Solution {
public:
    int concatenatedBinary(int n) {
        long long ans=1,mod=1e9+7;
        for(int i=2;i<=n;i++){
            int count=log2(i)+1;
            ans=(ans<<count)%mod;
            ans=(ans+i)%mod;
        }
        return ans;
    }
};