class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==100000001)
            return false;
        float f=sqrt(num);
        int i=(int)sqrt(num);
        cout<<i<<" "<<f;
        if(f-i==0)
            return true;
        return false;
    }
};