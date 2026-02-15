class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0,m=0,s=1;
        while(n){
           m*=10;
           m+=n%10;
           n/=10;
        }
        while(m>0){
            if(s)
                sum+=m%10,s=0;
            else
                sum-=m%10,s=1;
            m/=10;
        }
        return sum;
    }
};