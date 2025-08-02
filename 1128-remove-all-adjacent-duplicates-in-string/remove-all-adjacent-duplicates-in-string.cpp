class Solution {
public:
    string removeDuplicates(string s) {
        int i=0;
        stack<char> st,temp;
        while(i<s.size()){
            if(st.size()==0)
                st.push(s[i]);
            else if(st.top()==s[i])
                st.pop();
            else 
                st.push(s[i]);
            i++;
        }
        s="";
        while(st.size()){
            temp.push(st.top());
            st.pop();
        }
        while(temp.size()){
            s+=temp.top();
            temp.pop();
        }
        return s;
    }
};