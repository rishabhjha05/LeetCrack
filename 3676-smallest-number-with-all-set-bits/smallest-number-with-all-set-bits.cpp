class Solution {
public:
    int smallestNumber(int n) {
        if(n==0)
            return 1;
        int count=0;
        while(n)
            n=n>>1,count++;
        return pow(2,count)-1;
    }
};