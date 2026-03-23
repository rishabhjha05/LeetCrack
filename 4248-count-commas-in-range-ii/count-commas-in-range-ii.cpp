class Solution {
public:
    long long countCommas(long long n) {
        if(n<=999)
            return 0;
        long long ans=0,num=999999,prev=999,m=1;
        while(num<=n){
            ans+=1LL*(num-prev)*m;
            prev=num;
            for(int j=0;j<3;j++)
                num*=10,num+=9;
            m++;
        }
        ans+=(n-prev)*m;
        return ans;
    }
};