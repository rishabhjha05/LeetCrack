class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> freq;
        for(char ch: stones)
            freq[ch]++;
        int count=0;
        for(char ch:jewels)
            if(freq[ch]>0)
                count+=freq[ch];
        return count;
    }
};