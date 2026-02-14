class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        for(string str: words){
            int sumW=0;
            for(char ch: str)
                sumW+=weights[ch-'a'];
            sumW=sumW%26;
            ans+=(char)('z'-sumW);
        }
        return ans;
    }
};