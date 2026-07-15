class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd=n*n,even=n*(n+1);
        for(int i=min(odd,even);i>0;i--)
            if(odd%i==0 && even%i==0)
                return i;
        return 1;
    }
};