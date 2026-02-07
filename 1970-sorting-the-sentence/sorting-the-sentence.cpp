class Solution {
public:
    bool isDigit(char ch){
        if((int)ch<=58 && (int)ch>=48)
            return 1;
        return 0;
    }
    int Digit(char ch)
    {
        return ch-'0';
    }
    string sortSentence(string s) {
        int n=s.size(),i=0;
        string ans="";
        vector<string> vec(10);
        while(i<n){
            string str="";
            while(!isDigit(s[i]))
                str+=s[i++];
            vec[Digit(s[i])-1]=str;
            i+=2;
        }
        for(string str : vec){
            if(str=="")
                break;
            ans+=str;
            ans+=" ";
        }
        ans.pop_back();
        return ans;
    }
};