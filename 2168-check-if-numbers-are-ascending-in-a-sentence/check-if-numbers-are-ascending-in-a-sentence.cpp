class Solution {
public:
    bool isDigit(char ch){
        if((int)ch<48 || (int)ch>58)
            return false;
        return true;
    }
    bool areNumbersAscending(string s) {
        int n=s.size(),i=0,prev=0;
        while(i<n){
            int num=0;
            while(i<n && !isDigit(s[i]))
                i++;
            while(i<n && isDigit(s[i])){
                num*=10;
                num+=s[i]-'0';
                i++;
            }
            if(prev<num){
                cout<<num<<" ";
                prev=num;
            }
            else if(num!=0)
                return false;
        }
        return true;
    }
};