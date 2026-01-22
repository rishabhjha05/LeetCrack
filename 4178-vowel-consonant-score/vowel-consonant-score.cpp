class Solution {
public:
    bool isVowel(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            return 1;
        return 0;
    }
    int vowelConsonantScore(string s) {
        int c=0,v=0;
        for(char ch: s)
            if(isVowel(ch))
                v++;
            else if(int(ch)>=97 &&int(ch)<=122)
                c++;
        if(c>0)
            return v/c;
        return 0;
    }
};