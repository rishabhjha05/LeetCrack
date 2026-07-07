class Solution {
public:
    long long sumAndMultiply(int n) {
        long long count=0,ans=0,sum=0;
        while(n>0){
            if(n%10==0)
                count++;
            else
            {
                ans*=10;
                ans+=n%10;
                sum+=n%10;
            }
            n/=10;
        }
        long long rev;
        while(ans>0)
            {
                rev*=10;
                rev+=ans%10;
                ans/=10;
            }
        return rev*sum;
    }
};