class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int i=s.size()-1;
        while(i>=0 && s[i]==' ')
            i--;
        while(i>=0){
            stack<char> st;
            string str="";
            while(i>=0 && s[i]!=' ')
                st.push(s[i--]);
            while(st.size()!=0)
            {
                str+=st.top();
                st.pop();
            }
            ans+=str;
            while(i>=0 && s[i]==' ')
                i--;
            if(i>=0)
                ans+=' ';
        }
        return ans;
    }
};