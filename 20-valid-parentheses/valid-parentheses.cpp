class Solution {
public:
    bool isValid(string s) {
        int i=0;
        stack<char> st;
        while(i<s.size()){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                st.push(s[i]);
            else if(st.size()==0)
                return false;
            else if(st.top()=='(' && s[i]==')')
                st.pop();
            else if(st.top()=='[' && s[i]==']')
                st.pop();
            else if(st.top()=='{' && s[i]=='}')
                st.pop();
            else{
                
                return false;
            }
            i++;
        }
        if(st.size()!=0)
            return false;
        return true;
    }
};