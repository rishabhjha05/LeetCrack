class Solution {
public:
    int minOperations(string s) {
        int n=s.size(),a=0,b=0;
        bool flag=1;
        for(int i=1;i<=n;i++){
            int len=1;
            while(i<n && s[i]!=s[i-1])
                len++,i++;
            if(flag)
                a+=len,flag=0;
            else
                b+=len,flag=1;
        }
        return min(a,b);
    }
};