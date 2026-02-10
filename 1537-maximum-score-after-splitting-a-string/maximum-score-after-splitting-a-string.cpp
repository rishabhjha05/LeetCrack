class Solution {
public:
    int maxScore(string s) {
        unordered_map<char,int> freqR,freqL;
        for(char ch: s)
            freqR[ch]++;
        int i=0,ans=0,n=s.size();
        while(i<n-1){
            freqR[s[i]]--;
            freqL[s[i]]++;
            int noZ=freqL['0'],noO=freqR['1'];
            cout<<noZ<<" "<<noO<<endl;
            ans=max(ans,noZ+noO);
            i++;
        }
        return ans;
    }
};