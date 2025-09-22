class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mx=0,n=s.size();
        for(int i=0;i<n;i++){
            int j=i;
            unordered_map<char,int> freq;
            while(j<n && freq[s[j]]<1){
                freq[s[j]]++;
                j++;
            }
            mx=max(mx,j-i);
        }
        return mx;
    }
};