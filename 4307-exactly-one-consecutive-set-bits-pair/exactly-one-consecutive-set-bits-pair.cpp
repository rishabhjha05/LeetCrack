class Solution {
public:
    bool consecutiveSetBits(int n) {
        
        int count=0,m=n%2;
        n=n>>1;
        while(n){
            if(count>1)
                return 0;
            if(n&m!=0)
                count++;
            m=n%2;
            n/=2;
        }
        return count==1;
    }
};