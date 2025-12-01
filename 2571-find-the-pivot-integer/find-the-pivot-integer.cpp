class Solution {
public:
    int pivotInteger(int n) {
        int tSum=0,sum=0;
        for(int i=1;i<=n;i++)
            tSum+=i;
        for(int i=1;i<=n;i++){
            sum+=i;
            if(tSum==sum)
                return i;
            tSum-=i;
        }
        return -1;
    }
};