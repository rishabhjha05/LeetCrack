class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> freq;
        int n=s.size();
        for(char ch : s)
            freq[ch]++;
        for(int i=0;i<n;i++)
            if(freq[s[i]]==1)
                return i;
        return -1;
    }
};