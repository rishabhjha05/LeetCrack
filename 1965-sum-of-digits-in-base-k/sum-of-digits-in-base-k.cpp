class Solution {
public:
    int sumBase(int n, int k) {
        int i=0,sum=0;
        while(n>=pow(k,i+1))
            i++;
        while(i>=0){
            int p=pow(k,i);
            sum+=n/p;
            n=n%p;
            i--;
        }
        return sum;
    }
};