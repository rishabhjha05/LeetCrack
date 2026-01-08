class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int> mps,mpt;
        for(char ch: s)
            mps[ch]++;
        for(char ch: target)
            mpt[ch]++;
        int ans=INT_MAX;
        for(auto i:mpt)
        {
            int n=mps[i.first]/i.second;
            ans=min(ans,n);
        }
        return ans;
    }
};