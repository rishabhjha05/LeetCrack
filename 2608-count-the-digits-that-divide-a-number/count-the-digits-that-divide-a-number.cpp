class Solution {
public:
    int countDigits(int num) {
        int n=num,count=0;
        while(n){
            int ld=n%10;
            if(ld!=0 && num%ld==0)
                count++;
            n/=10;
        }
        return count;
    }
};