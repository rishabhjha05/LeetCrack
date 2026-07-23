class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        int i=0,n=s.size();
        string ans="";
        while(i<n){
            if(s[i]=='(' && st.size()==0)
                st.push(s[i]);
            else if(s[i]=='(')
            {
                st.push(s[i]);
                ans+="(";
            }
            else if(s[i]==')'&& st.size()!=1){
                ans+=")";
                st.pop();
            }
            else
                st.pop();
            i++;
        }
        return ans;
    }
};