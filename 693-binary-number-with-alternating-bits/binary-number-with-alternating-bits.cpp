class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n==4)
            return false;
        long long m=n>>1;
        m=m^n;
        if((m&(m+1))==0)
            return true;
        return false;
    }
};