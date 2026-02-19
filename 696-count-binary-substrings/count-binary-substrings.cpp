class Solution {
public:
    int countBinarySubstrings(string s) {
        int prev=INT_MAX,curr=INT_MAX;
        int n=s.size(),ans=0;
        for(int i=0;i<n;){
            char ch=s[i];
            int len=0;
            while(i<n && s[i]==ch)
                i++,len++;
            if(curr==INT_MAX)
                curr=len;
            else{
                prev=curr,curr=len;
                ans+=min(prev,curr);
            }
        }
        return ans;
    }
};