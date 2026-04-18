class Solution {
public:
    int mirrorDistance(int n) {
        int m=0,n2=n;
        while(n2>0){
            m*=10;
            m+=n2%10;
            n2/=10;
        }
        return abs(n-m);
    }
};