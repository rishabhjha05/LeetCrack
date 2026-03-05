class Solution {
public:
    bool isValid(char ch1,char ch2){
        if(abs(ch1-ch2)<=1)
            return 1;
        return 0;
    }
    int removeAlmostEqualCharacters(string word) {
        int n=word.size(),ans=0;
        for(int i=1;i<=n;i++){
            int len=1;
            while(i<n && isValid(word[i],word[i-1]))
                len++,i++;
            ans+=len/2;
        }
        return ans;
    }
};