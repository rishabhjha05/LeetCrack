class Solution {
public:
    bool isHappy(int n) {
        for(int i=0;i<25;i++){
            int sum=0;
            while(n){
                sum+=pow(n%10,2);
                n/=10;
            }
            if(sum==1)
                return true;
            n=sum;
        }
        return false;
    }
};