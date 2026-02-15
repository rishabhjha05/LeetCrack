class Solution {
public:
    bool isV(char ch) {
        ch = std::tolower(ch); 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        return false;
    }
    string toGoatLatin(string sentence) {
        int i=0,n=sentence.size();
        string astr="a",ans="";
        while(i<n){
            if(isV(sentence[i])){
                while(i<n && sentence[i]!=' ')
                    ans+=sentence[i++];
            }
            else{
                char ch=sentence[i++];
                while(i<n && sentence[i]!=' ')
                    ans+=sentence[i++];
                ans+=ch;
            }
            i++;
            ans+="ma";
            ans+=astr;
            ans+=" ";
            astr+='a';
        }
        ans.pop_back();
        return ans;
    }
};