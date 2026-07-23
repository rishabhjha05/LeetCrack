class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1)
            return s;
        long long x=n-1,ans=s;
        if(x%2==0)
            return ans+(x/2)*(m-1)+1;
        else 
            return ans+(x/2)*(m-1)+m;
    }
};