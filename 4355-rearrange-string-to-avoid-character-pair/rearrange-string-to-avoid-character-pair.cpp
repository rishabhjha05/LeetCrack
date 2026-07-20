class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        unordered_map<char,int> freq;
        for(char ch: s)
            freq[ch]++;
        s="";
        for(int i=0;i<freq[y];i++)
            s.push_back(y);
        for(auto itr: freq){
            if(itr.first!=y){
                for(int i=0;i<itr.second;i++)
                    s.push_back(itr.first);
            }
        }
        return s;
    }
};