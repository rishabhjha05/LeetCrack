class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1)
            return s;
        n--;
        if(!(n%2))
            n--;
        return s+(n/2)*1LL*(m-1)+m;
    }
};