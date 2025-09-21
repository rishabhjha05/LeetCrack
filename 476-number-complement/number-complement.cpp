class Solution {
public:
    int findComplement(int num) {
        int i=0,num2=0;
        while(num){
            num2+=!(num%2)*pow(2,i);
            i++;
            num/=2;
        }
        return num2;
    }
};