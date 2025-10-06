class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> freq;
        for(char ch: sentence)
            freq[ch]++;
        for(int i=97;i<=122;i++)
            if(!freq[(char)i])
                return false;
        return true;
    }
};