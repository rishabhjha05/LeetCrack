class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,prod=1,num=n;
        while(num>0)
            sum+=num%10,prod*=num%10,num/=10;
        sum+=prod;
        return n%sum==0;
    }
};