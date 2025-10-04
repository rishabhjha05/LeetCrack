class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=n*(n+1)/2,num2=0,x=m;
        while(x<=n)
        {
            num2+=x;
            x+=m;
        }
        num1-=num2;
        cout<<num1<<" "<<num2;
        return num1-num2;
    }
};