class Solution {
public:
    bool isAlpha(char ch){
        if((int)ch>=97 && (int)ch<=122)
            return 1;
        return 0;
    }
    string reverseByType(string s) {
        int n=s.size(),i=0,j=n-1;
        while(i<j){
            if(isAlpha(s[i]) && isAlpha(s[j])){
                char ch=s[i];
                s[i]=s[j];
                s[j]=ch;
                i++,j--;
            }
            else if(isAlpha(s[i]))
                j--;
            else if(isAlpha(s[j]))
                i++;
            else
                i++,j--;
        }
        i=0,j=n-1;
        while(i<j){
            if(!isAlpha(s[i]) && !isAlpha(s[j])){
                char ch=s[i];
                s[i]=s[j];
                s[j]=ch;
                i++,j--;
            }
            else if(!isAlpha(s[i]))
                j--;
            else if(!isAlpha(s[j]))
                i++;
            else
                i++,j--;
        }
        return s;
    }
};