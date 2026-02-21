class Solution {
public:
    int setBits(int n){
        int count=0;
        while(n){
            if((n&1)==1)
                count++;
            n=n>>1;
        }
        return count;
    }
    bool isPrime(int n){
        if(n<2)
            return 0;
        for(int i=2;i<=sqrt(n);i++)
            if(n%i==0)
                return 0;
        return 1;
    }
    int countPrimeSetBits(int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){   
            int num=setBits(i);
            if(isPrime(num))
                count++;
        }
        return count;
    }
};