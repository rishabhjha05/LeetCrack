class Solution {
public:
    char findTheDifference(string s, string t) {
        int i=0,sum=0;
        while(i<t.size())
            sum+=(int)t[i++];
        i=0;
        while(i<s.size())
            sum-=(int)s[i++];
        return (char)sum;
    }
};