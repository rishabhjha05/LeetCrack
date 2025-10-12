class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char,int> freq;
        for(char ch : moves)
            freq[ch]++;
        if(freq['U']==freq['D'] && freq['R']==freq['L'])
            return true;
        return false;
    }
};