class Solution {
public:
    string reverseStr(string s, int k) {
        int c=2*k, idx=0,n=s.size();
        while(idx<n){
            int i=idx,j=min(k-1,n-1);
            while(i<j){
                char ch=s[i];
                s[i]=s[j];
                s[j]=ch;
                i++,j--;
            }
            k+=c,idx+=c;
        }
        return s;
    }
};