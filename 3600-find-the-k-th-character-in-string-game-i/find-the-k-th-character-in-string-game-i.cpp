class Solution {
public:
    char kthCharacter(int k) {
        string word="a";
        while(word.size()<k){
            string str="";
            for(char ch: word){
                if(ch=='z')
                    str+='a';
                else
                    str+=char(ch+1);
            }
            word+=str;
        }
        return word[k-1];
    }
};