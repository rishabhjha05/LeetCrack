class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int n=words.size();
        for(int i=0;i<n;i++){
            string str=words[i];
            int m=str.size();
            for(int j=0;j<m;j++)
                if(str[j]==x){
                    ans.push_back(i);
                    break;
                }
        }
        return ans;
    }
};