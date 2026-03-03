class Solution {
public:
    string make(string pStr,int n){
        if(n==0)
            return pStr;
        string str2="";
        int m=pStr.size();
        for(int i=m-1;i>=0;i--)
            if(pStr[i]=='0')
                str2.push_back('1');
            else
                str2.push_back('0');
        return make(pStr+"1"+str2,n-1);
    }
    char findKthBit(int n, int k) {
        string str=make("0",n-1);
        return str[k-1];
    }
};