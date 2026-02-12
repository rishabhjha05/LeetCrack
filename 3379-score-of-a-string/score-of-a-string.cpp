class Solution {
public:
    int scoreOfString(string s) {
        int n=s.size(),i=1,sum=0;
        while(i<n)
            sum+=abs(s[i]-s[i-1]),i++;
        return sum;
    }
};