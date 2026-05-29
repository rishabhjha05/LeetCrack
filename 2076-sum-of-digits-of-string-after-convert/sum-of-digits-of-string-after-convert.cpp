class Solution {
public:
    int getLucky(string s, int k) {
        string num="";
        for(char ch: s)
            num+=to_string((ch-'a')+1);
        int n=0,m=0;
        for(char ch: num)
            n+=(ch-'0');
        for(int i=1;i<k;i++){
            while(n)
                m+=n%10,n/=10;
            n=m,m=0;
        }
        return n;
    }
};