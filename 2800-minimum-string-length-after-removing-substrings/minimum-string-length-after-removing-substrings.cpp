class Solution {
public:
    int minLength(string s) {
        bool found=true;
        while(found){
            found=false;
            int i=0,n=s.size();
            string str="";
            while(i<n){
                if(i+1<n && s[i]=='A'&& s[i+1]=='B')
                    i+=2,found=true;
                else if(i+1<n && s[i]=='C'&& s[i+1]=='D')
                    i+=2,found=true;
                else
                    str+=s[i++];
            }
            s=str;
        }
        return s.size();
    }
};