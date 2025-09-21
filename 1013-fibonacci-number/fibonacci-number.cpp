class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        else if(n==1||n==2)  return 1;
        int prevp=1,prev=1,curr=0;
        for(int i=2;i<n;i++){
            curr=prevp+prev;
            prevp=prev;
            prev=curr;
        }
        return curr;
    }
};