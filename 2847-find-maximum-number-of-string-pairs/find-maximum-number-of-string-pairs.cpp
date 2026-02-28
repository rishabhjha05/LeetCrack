class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string> s;
        int count=0;
        for(string str: words){
            string str2=str;
            reverse(str.begin(),str.end());
            if(s.find(str)!=s.end())
                count++;
            s.insert(str2);
        }
        return count;
    }
};