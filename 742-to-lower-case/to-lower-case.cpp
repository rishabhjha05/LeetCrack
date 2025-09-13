class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++)
        {
            int ascii=s[i];
            if(ascii<=90 && ascii>64)
                s[i]=s[i]+32;
        }
        return s;
    }
};