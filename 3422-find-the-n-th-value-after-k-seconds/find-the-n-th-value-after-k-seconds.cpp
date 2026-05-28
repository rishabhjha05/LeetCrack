class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<long long> prefix(n,1);
        int mod=1e9+7;
        for(int i=0;i<k;i++){
            for(int j=1;j<n;j++)
                prefix[j]=prefix[j]%mod+prefix[j-1]%mod;
        }
        return prefix[n-1]%mod;

    }
};