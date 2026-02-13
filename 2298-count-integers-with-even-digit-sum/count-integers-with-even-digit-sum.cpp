class Solution {
public:
    bool itIs(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        return !(sum%2);
    }
    int countEven(int num) {
        int count=0;
        while(num){
            if(itIs(num))
                count++;
            num--;
        }
        return count;
    }
};