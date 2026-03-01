class Solution {
public:
    int concatenatedBinary(int n) {
        long long ans=0,mod=1e9+7,d=0;
        for(int i=1;i<=n;i++){
            if((i&(i-1))==0)
                d++;
            ans=(ans<<d)%mod;
            ans=(ans+i)%mod;
        }
        return ans;
    }
};