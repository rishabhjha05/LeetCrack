class Solution {
public:
    int max(int a,int b){
        if(a<b)
            return b;
        return a;
    }
    int maxDepth(string s) {
        stack<char> st;
        int ans=-1;
        for(char ch: s){
            if(ch=='(')
                st.push(ch);
            else if(ch==')')
                st.pop();
            ans=max(ans,st.size());
        }
        return ans;
    }
};