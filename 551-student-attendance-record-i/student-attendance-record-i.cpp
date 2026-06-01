class Solution {
public:
    bool checkRecord(string s) {
        int l=3,a=2;
        for(char ch: s){
            if(a==0 || l==0)
                return 0;
            if(ch=='A')
                a--,l=3;
            else if(ch=='L')
                l--;
            else
                l=3;
        }
        if(a==0 || l==0)
            return 0;
        return 1;
    }
};