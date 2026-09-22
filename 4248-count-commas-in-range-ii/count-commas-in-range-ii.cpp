class Solution {
public:
    long long countCommas(long long n) {
        if(n<=999)
            return 0;
        long long num=999999,prev=999,m=1,ans=0;
        while(num<=n){
            ans+=1LL*(num-prev)*m;
            m++;
            prev=num;
            num*=1000;
            num+=999;
        }
        ans+=1LL*(n-prev)*m;
        return ans;
    }
};