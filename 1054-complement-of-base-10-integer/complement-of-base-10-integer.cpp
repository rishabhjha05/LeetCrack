class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
            return 1;
        int i=0,num=0;
        while(n){
            num+=!(n%2)*pow(2,i++);
            n/=2;
        }
        return num;
    }
};