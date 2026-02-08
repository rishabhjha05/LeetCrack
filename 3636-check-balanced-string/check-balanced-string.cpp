class Solution {
public:
    int Digit(char ch){
        return ch-'0';
    }
    bool isBalanced(string num) {
        int n=num.size(),e=0,o=0,i=0;
        while(i<n){
            e+=Digit(num[i++]);
            if(i<n)
                o+=Digit(num[i++]);
        }
        return (e==o);
    }
};