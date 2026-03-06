class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size()>k){
            int i=0,n=s.size(),m=k;
            string ans="";
            while(i<n){
                int sum=0;
                while(i<n && i<m)
                    sum+=s[i++]-'0';
                m+=k;
                ans+=to_string(sum);
            }
            s=ans;
        }
        return s;
    }
};