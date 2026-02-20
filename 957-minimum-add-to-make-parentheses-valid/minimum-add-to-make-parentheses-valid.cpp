class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
        stack<char> st;
        for(char ch: s){
            if(ch=='(')
                st.push(ch);
            else if(st.empty())
                count++;
            else
                st.pop();
        }
        count+=st.size();
        return count;
    }
};