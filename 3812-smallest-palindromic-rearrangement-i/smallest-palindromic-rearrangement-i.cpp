class Solution {
public:
    string smallestPalindrome(string s) {
        sort(s.begin(),s.end());
        string mid="",ans="";
        int i=0,j=1,n=s.size();
        while(i<n){
            while(j<n && s[j]==s[i])
                j++;
            if((j-i)%2!=0)
                mid+=s[i];
            for(int k=0;k<(j-i)/2;k++)
                ans+=s[i];
            i=j++;
        }
        s="";
        s+=ans;
        s+=mid;

        reverse(ans.begin(),ans.end());
        s+=ans;
        return s;
    }
};