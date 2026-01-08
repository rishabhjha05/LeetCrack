class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> freq;
        for(char ch: chars)
            freq[ch]++;
        int n=words.size(),ans=0;
        for(int i=0;i<n;i++){
            unordered_map<char,int> freq2;
            bool flag=true;
            for(char ch : words[i])
                freq2[ch]++;
            for(auto i: freq2)
                if(freq[i.first]<i.second){
                    flag=false;break;}
            if(flag)
                ans+=words[i].size();
        }
        return ans;
    }
};