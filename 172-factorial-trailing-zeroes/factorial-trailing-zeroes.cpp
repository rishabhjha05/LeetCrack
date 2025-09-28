class Solution {
public:
    int trailingZeroes(int n) {
        long long noT=0,noF=0;
        for(int i=1;i<=n;i++)
        {
            int n=i;
            while(n%2==0)
                noT++,n/=2;
            n=i;
            while(n%5==0)
                noF++,n/=5;
        }
        return min(noT,noF);
    }
};