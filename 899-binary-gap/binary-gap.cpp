class Solution {
public:
    int binaryGap(int n) {
        while(n>0 && (n&1)!=1)
            n=n>>1;
        int idx=0,ans=0,i=0;
        while(n){
            if((n&1)==1)
                ans=max(ans,i-idx),idx=i;
            n=n>>1;
            i++;
        }
        return ans;
    }
};