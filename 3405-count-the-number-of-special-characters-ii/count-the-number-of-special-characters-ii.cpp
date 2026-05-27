class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int> freq,pf,e;
        int count=0,n=word.size();
        string str="";
        cout<<(char)('z'-32);
        for(char ch: word)
            freq[ch]++;
        for(int i=n-1;i>=0;i--){
            char ch=word[i];
            if(ch<=90 && pf['a'+(ch-'A')]==0 && freq['a'+(ch-'A')]!=0&&freq[ch]==1 && e[ch]==0)
                count++,e[ch]++;
            freq[ch]--,pf[ch]++;
        }
        return count;
    }
};