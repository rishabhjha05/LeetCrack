class Solution {
public:
    int subtractProductAndSum(int n) {
        long long m=1,sum=0;
        while(n>0){
            sum+=n%10;
            m*=n%10;
            n/=10;
        }
        return m-sum;
    }
};