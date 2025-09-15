class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int i=0,count=0;
        unordered_map<char,bool> freq;
        for(char ch: brokenLetters)
            freq[ch]=true;
        while(i<text.size()){
            bool canBe=true;
            while(i<text.size() && text[i]!=' ')
            {
                if(freq[text[i]]==1)
                    canBe=false;
                i++;
            } 
            if(canBe)
                count++;
            i++;
        }
        return count;
    }
};