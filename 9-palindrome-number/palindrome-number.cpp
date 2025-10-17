class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse=0,x2=x;
        while(x>0)
        {
            reverse*=10;
            reverse+=x%10;
            x/=10;
        }
        if(reverse==x2)
        return true;
        else return false;
    }
};