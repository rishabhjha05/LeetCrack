class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> freq;
        int i=0,j=0,n=s.size(),ans=INT_MIN;
        while(j<n){
            if(j<n && freq[s[j]]<2)
                freq[s[j++]]++,ans=max(j-i,ans);
            else{
                while(i<n && freq[s[j]]==2)
                    freq[s[i++]]--;
            }
        }
        return ans;
    }
};