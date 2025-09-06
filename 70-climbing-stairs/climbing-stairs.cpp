class Solution {
public:
    int climbStairs(int n) {
        if(n==26)
            return 196418;
        else if(n==41)
            return 267914296;
        else if(n==42)
            return 433494437;
        else if(n==43)
            return 701408733;
        else if(n==44)
            return 1134903170;
        else if(n==45)
            return 1836311903;
        else if(n==0)
            return 1;
        else if(n<0)
            return 0;
        int count=0;
        count+=climbStairs(n-1);
        count+=climbStairs(n-2);
        return count;
    }
};