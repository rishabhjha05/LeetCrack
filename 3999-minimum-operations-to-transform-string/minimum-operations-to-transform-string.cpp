class Solution {
public:
    int minOperations(string s) {
        sort(s.begin(),s.end());
        int count=0,i=0,j=1,n=s.size();
        while(j<n){
            while(s[i]=='a')
                i++;
            j=i+1;
            while(j<n && s[i]==s[j])
                j++;
            if(j<n){
                count+=s[j]-s[i];
                int k=i;
                while(k<j){
                    s[k]=s[j];
                    k++;
                }
            }
            if(j==n){
                count+=(int)'z'-(int)s[i]+1;
                return count;
            }
        }
        if(i<n && s[i]!='a')
            count+=(int)'z'-(int)s[i]+1;
        return count;
        
    }
};