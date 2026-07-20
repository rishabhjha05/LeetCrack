class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]==x && s[j]==y)
                s[i++]=y,s[j--]=x;
            else if(s[i]==x)
                j--;
            else if(s[j]==y)
                i++;
            else
                i++,j--;
        }
        return s;
    }
};