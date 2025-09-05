class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        for(int i=0;i<=60;i++){
            long long z=num1-(i*(long long)num2);
            if(z<=0)
                return -1;
            long long setBits=0,copy=z;
            while(copy>0)
            {
                if((copy&1)==1)
                    setBits++;
                copy>>=1;
            }
            if(i>=setBits && i<=z)
                return i;
        }
        return -1;
    }
};