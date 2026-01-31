class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=s.size();
        string str;
        vector<char> vec(n);
        for(int i=0;i<n;i++)
            vec[indices[i]]=s[i];
        for(char ch: vec)
            str.push_back(ch);
        return str;
    }
};