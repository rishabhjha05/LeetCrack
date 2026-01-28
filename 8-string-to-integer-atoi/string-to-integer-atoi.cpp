class Solution {
public:
    bool isDigit(char ch){
        if((int)ch<48 || (int)ch>58)
            return false;
        return true;
    }
    int myAtoi(string s) {
        long long num=0,i=0,n=s.size(),sign=1;
        while(s[i]==' ')
            i++;
        if(s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(s[i]=='+')
            i++;
        while(s[i]=='0')
            i++;
        while(i<n && isDigit(s[i])){
            num*=10;
            num+=s[i]-'0';
            i++;
            if(sign*num<=INT_MIN)
                return INT_MIN;
            else if(sign*num>=INT_MAX)
                return INT_MAX;
        }
        num*=sign;
        cout<<num;
        if(num>INT_MAX)
            return INT_MAX;
        else if(num<INT_MIN)
            return INT_MIN;
        return num;
    }
};