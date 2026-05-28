class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int c=coordinates[0]-'a',r=coordinates[1];
        if(c%2==0 && r%2==0)
            return true;
        else if (c%2==1 && r%2==1)
            return true;
        return false;
    }
};