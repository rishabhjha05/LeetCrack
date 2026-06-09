class Solution {
public:
    bool consecutiveSetBits(int n) {
        if(n<3)
            return 0;
        bool f=1;
        int m=n%2;
        n=n>>1;
        while(n){
            if(n&m!=0 && f==0)
                return false;
            else if(n&m!=0)
                f=0;
            m=n%2;
            n/=2;
        }
        return !f;
    }
};