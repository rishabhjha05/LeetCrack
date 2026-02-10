class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> freq1,freq2;
        for(string str: words1)
            freq1[str]++;
        for(string str: words2)
            freq2[str]++;
        int count=0;
        for(string str: words1)
            if(freq1[str]==1 && freq2[str]==1)
                count++;
        return count;
    }
};