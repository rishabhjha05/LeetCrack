class Solution {
public:
    bool isPrime(int n){
        if(n<=1)    
            return false;
        for(int i=2;i<=sqrt(n);i++)
            if(n%i==0)
                return false;
        return true;
    }
    bool isThree(int n) {
        bool flag=1;
        for(int i=2;i<n;i++){
            if(n%i==0 && flag==0)
                return false;
            else if(n%i==0)
                flag=0;
        }
        return (!flag);
        
    }
};