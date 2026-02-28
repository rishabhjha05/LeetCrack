class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string> s;
        int count=0;
        for(string str : words)
            s.insert(str);
        for(string str: words){
            string st=str;
            reverse(str.begin(),str.end());
            if(st!=str &&s.find(str)!=s.end())
                count++;
        }
        return count/2;
    }
};