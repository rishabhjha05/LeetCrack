class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int sum=0,x=num;
            while(x){
                sum+=x%10;
                x/=10;
            }
            num=sum;
        }  
        return num;
    }
};