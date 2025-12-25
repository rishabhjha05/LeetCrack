class Solution {
public:
    long long find(long long st,long long no,char ch,long long gap){
        if(no==1)
            return st;
        else if(ch=='R'){
            long long n=no/2;
            if(no%2!=0)
                st=st+2*gap*n;
            else
                st=st+2*gap*(n-1);
            return find(st,no-n,'L',gap*2);
        }
        else
        {
            long long n=no/2;
            if(no%2!=0)
                st=st-gap*2*n;
            else
                st=st-gap*2*(n-1);
            return find(st,no-n,'R',gap*2);
        }
    }
    long long lastInteger(long long n) {
        return find(1,n,'R',1);
    }
};