class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int> freq;
        for(char ch: s)
            freq[ch]++;
        int len=0;
        for(auto i: freq)
        {
            if(i.second%2==0)
                len+=2;
            else
                len++;
        }
        return len;
    }
};