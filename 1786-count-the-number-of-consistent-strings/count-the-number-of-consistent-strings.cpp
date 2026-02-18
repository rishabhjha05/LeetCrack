class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> freq;
        for(char ch: allowed)   
            freq[ch]++;
        int count=words.size();
        for(string str: words){
            for(char ch: str)
                if(freq[ch]<1){
                    count--;
                    break;}
        }
        return count;
    }
};