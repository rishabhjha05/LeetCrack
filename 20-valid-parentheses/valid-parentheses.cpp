class Solution {
public:
    bool isValid(string s) {
        int i=0;
        stack<char> st;
        while(i<s.size()){
            if(st.size()==0 && (s[i]==')'||s[i]==']' || s[i]=='}'))
                return false;
            else if(s[i]=='(' || s[i]=='{'|| s[i]=='[')
                st.push(s[i]);
            else if(s[i]==')' && st.top()=='(')
                st.pop();
            else if(s[i]==']' && st.top()=='[')
                st.pop();
            else if(s[i]=='}' && st.top()=='{')
                st.pop();
            else 
                return false;
            i++;
        }
        if(st.size()!=0)
            return false;
        return true;
    }
};