class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        map<char,int> row;
        string s="qwertyuiop";
        for(char ch: s)
            row[ch]=1;
        s="asdfghjkl";
        for(char ch: s)
            row[ch]=2;
        s="zxcvbnm";
        for(char ch: s)
            row[ch]=3;
        vector<string> ans;
        for(string str: words){
            char chr=str[0];
            if((int)chr<97)
                chr=(char)((int)chr+32);
            int r=row[chr];
            bool found=1;
            for(char ch: str){
                if((int)ch<97)
                    ch=(char)((int)ch+32);
                if(r!=row[ch]){
                    found=0;
                    break;
                }
            }
            if(found)
                ans.push_back(str);
        }
        return ans;
    }
};