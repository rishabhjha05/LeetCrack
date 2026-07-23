class Solution {
public:
    bool isVowel(char ch){
        if(ch=='a'|| ch=='e'||ch=='i'|| ch=='o'|| ch=='u')
            return 1;
        return 0;
    }
    bool check(string str){
        if(isVowel(str[0]) && isVowel(str[str.size()-1]))
            return 1;
        return 0;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++)
            if(check(words[i]))
                count++;

        return count;
    }
};