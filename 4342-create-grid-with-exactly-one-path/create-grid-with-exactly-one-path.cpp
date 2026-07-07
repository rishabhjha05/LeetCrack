class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        string str(n,'.');
        ans.push_back(str);
        for(int i=0;i<m-1;i++){
            string str(n,'#');
            str[n-1]='.';
            ans.push_back(str);
        }
        return ans;
    }
};