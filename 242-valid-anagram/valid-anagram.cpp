class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq;
        for(char ch: s)
            freq[ch]++;
        int count=0;
        for(char ch: t){
            if(freq[ch]==0)
                return 0;
            freq[ch]--;
            if(freq[ch]==0)
                count++;
        }
        return freq.size()==count;
    }
};