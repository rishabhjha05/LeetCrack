class Solution {
public:
    bool checkOnesSegment(string s) {
        int count=0,i=0,j=1,n=s.size();
        if(n==1)
            return 1;
        while(i<n){
            while(j<n && s[j]=='1')
                j++;
            count++;
            while(j<n && s[j]=='0')
                j++;
            i=j,j++;
        }
        return count==1;
    }
};