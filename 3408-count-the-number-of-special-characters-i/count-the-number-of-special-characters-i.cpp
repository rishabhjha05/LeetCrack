class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int> freq,f;
        int count=0;
        string str="";
        cout<<(char)('z'-32);
        for(char ch: word){
            if(ch<=90 && f[ch]==0)
                str+=ch,f[ch]++;
            else
                freq[ch]++;
        }
        for(char ch: str){
            if(freq[ch+32]>=1)
                count++;
        }
        return count;
    }
};