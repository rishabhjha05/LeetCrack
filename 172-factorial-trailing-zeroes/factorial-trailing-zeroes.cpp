class Solution {
public:
    int trailingZeroes(int n) {
        long long noF=0;
        for(int i=1;i<=n;i++)
        {
            int n=i;
            while(n%5==0)
                noF++,n/=5;
        }
        return noF;
    }
};