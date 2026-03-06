class Solution {
public:
    bool checkZeroOnes(string s) {
        int n=s.size(),i=0,z=-1,o=-1;
        while(i<n){
            char ch=s[i];
            int len=0;
            while(i<n && s[i]==ch)
                i++,len++;
            if(ch=='0')
                z=max(z,len);
            else
                o=max(o,len);
        }
        return o>z;
    }
};