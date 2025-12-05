class Solution {
public:
    string makeFancyString(string s) {
        int n=s.size();
        if(n<3)
            return s;
        string ans="";
        int i=0,j=1,k=2;
        while(k<n){
            if(s[i]==s[j] && s[j]==s[k]){
                i++,j++,k++;
                continue;
            }
            else
                ans+=s[i];
            i++,j++,k++;
        }
        ans+=s[i];
        ans+=s[j];
        return ans;
    }
};