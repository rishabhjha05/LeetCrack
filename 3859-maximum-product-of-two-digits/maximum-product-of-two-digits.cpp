class Solution {
public:
    int maxProduct(int n) {
        int m1=0,m2=0;
        while(n){
            m2=min(m1,max(m2,n%10));
            m1=max(m1,n%10);
            n/=10;
        }
        return m1*m2;
    }
};