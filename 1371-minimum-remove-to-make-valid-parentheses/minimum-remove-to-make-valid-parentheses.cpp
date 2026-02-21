class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=s.size();
        vector<bool> found(n,1);
        stack<char> st;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                found[i]=0;
                st.push('(');
            }
            else if(s[i]==')' && st.size()==0)
                found[i]=0;
            else if(s[i]==')' && st.size()!=0){
                int j=i;
                while(j>=0 && s[j]!='('||found[j]!=0)
                    j--;
                cout<<found[i]<<"\n";
                found[i]=1;
                found[j]=1;
                st.pop();
                cout<<found[i]<<"\n";
            }
        }
        string ans;
        for(bool ele:found)
            cout<<ele<<" ";
        for(int i=0;i<n;i++)
            if(found[i])
                ans.push_back(s[i]);
        return ans;
    }
};