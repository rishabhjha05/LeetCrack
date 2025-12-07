class Solution {
public:
    int countOdds(int low, int high) {
        int x=high-low;
        if(x%2==0 && low%2!=0)
            return x/2+1;
        else if (x%2==0)
            return x/2;
        return (x+1)/2;
    }
};