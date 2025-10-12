class Solution {
public:
    bool isPal(string str){
        int i=0,j=str.size()-1;
        while(i<=j){
            if(str[i]!=str[j])
                return false;
            i++,j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(string str:words)
            if(isPal(str))
                return str;
        return "";
    }
};