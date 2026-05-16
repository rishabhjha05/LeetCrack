class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> f(3);
        int i=0,j=0,n=s.size(),count=0;
        while(j<n){
            while(j<n && (f[0]==0||f[1]==0|| f[2]==0))
                f[s[j]-'a']++,j++;
            while(i<j && (f[0]!=0 && f[1]!=0 && f[2]!=0))
                f[s[i]-'a']--,i++,count+=n-j+1;
        }
        return count;
    }
};