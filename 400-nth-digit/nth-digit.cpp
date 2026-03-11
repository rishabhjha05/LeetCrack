class Solution {
public:
    int find(int num,int k){
        while(k)
            num/=10,k--;
        return num%10;
    }
    int findNthDigit(int n) {
        long long x=0,m=9,i=1;
        while(x<n){
            x+=1LL*m*i;
            m=1LL*m*10,i++;
        }
        m/=10,i--;
        x-=1LL*m*i;
        n-=x;
        int md=n%i;
        if(md==0){
            int y=(pow(10,i-1)+(n/i-1));
            return y%10;}
        return find(pow(10,i-1)+n/i,i-md);
    }
};