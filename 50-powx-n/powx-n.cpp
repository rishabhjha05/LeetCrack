class Solution {
public:
//     double myPow(double x, int n) {
//         double p;
//         if(n==1)
//             p=x;
//         else if(n==-1)
//             p=(1/x);
//         else if(n==0)   
//             p=1;
//         else if(n>0)
//             p=x*myPow(x,n-1);
//         else if(n<0){
//             p=(1/x)*myPow(x,n+1);
//         }
//         return p;
//     }

    double por(double x, long n){
        if(n==0)
            return 1;
        else if(n%2==0)
            return por(x*x,n/2);
        else
            return x*por(x,n-1);
    }
    double myPow(double x, int n) {
        if(n>=0)
            return por(x,n);
        else
            return 1/por(x,-1*(long)n);
    }
};