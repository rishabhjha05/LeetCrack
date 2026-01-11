class Solution {
public:
    int residuePrefixes(string s) {
        unordered_map<char, int> freq;
        int ans=0,count=0,n=s.size();
        for(int i=0;i<n;i++){
            if(freq[s[i]]==0)
                count++;
            if(count==(i+1)%3)
                ans++;
            freq[s[i]]++;
        }
        return ans;
    }
};