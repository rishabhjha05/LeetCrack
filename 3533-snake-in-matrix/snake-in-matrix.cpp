class Solution {
public:
    
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i=0,j=0;
        for(string str: commands)
            if(str[0]=='D')
                i++;
            else if(str[0]=='U')
                i--;
            else if(str[0]=='R')
                j++;
            else
                j--;
        return (i*n)+j;
    }
};