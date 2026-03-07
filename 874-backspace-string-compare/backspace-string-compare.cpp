class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        for(char ch: s){
            if(ch=='#' && st.size()>0)
                st.pop();
            else if(ch!='#')
                st.push(ch);
        }
        s="";
        while(!st.empty())
            s+=st.top(),st.pop();
        for(char ch: t){
            if(ch=='#' && st.size()>0)
                st.pop();
            else if(ch!='#')
                st.push(ch);
        }
        t="";
        while(!st.empty())
            t+=st.top(),st.pop();
        cout<<s<<" "<<t;
        return s==t;
    }
};