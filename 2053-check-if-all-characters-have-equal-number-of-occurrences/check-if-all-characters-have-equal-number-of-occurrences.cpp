class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> freq;
        for(char ch: s)
            freq[ch]++;
        int f=freq[s[0]];
        for(auto itr: freq)
            if(itr.second!=f)
                return 0;

        return 1;
    }
};