class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int> freq;
        int i=0,j=0,n=s.size(),ans=0,mx=1,mxP=0;
        freq[s[0]]=1;
        while(j<n){
            int winSize=j-i+1;
            if((winSize-mx)<=k)
                j++,freq[s[j]]++,ans=max(ans,winSize),mx=max(mx,freq[s[j]]);
            else
                freq[s[i]]--,i++;
        }
        return ans;
    }
};