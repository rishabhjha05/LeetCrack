class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0;
        for(string str: words){
            int i=0;
            bool found=1;
            for(char ch : str)
                if(s[i++]!=ch){
                    found=0;
                    break;
                }
            if(found)
                count++;   
        }
        return count;
    }
};