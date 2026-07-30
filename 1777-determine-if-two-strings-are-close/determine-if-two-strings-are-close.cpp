class Solution {
public:
    bool closeStrings(string word1, string word2) {
        sort(word1.begin(),word1.end());
        sort(word2.begin(),word2.end());
        if(word1.size()!=word2.size())
            return 0;
        else if(word1==word2)
            return 1;
        unordered_map<char, int> freq,f2;
        unordered_map<int,int> mp;
        for(char ch:word1)
            freq[ch]++;
        for(auto itr: freq)
            mp[itr.second]++;

        for(char ch: word2){
            if(freq[ch]==0)
                return false;
            f2[ch]++;
        }
        
        for(auto itr:f2){
            if(mp[itr.second]==0)
                return false;
            else
                mp[itr.second]--;
        }
        return true;
    }
};