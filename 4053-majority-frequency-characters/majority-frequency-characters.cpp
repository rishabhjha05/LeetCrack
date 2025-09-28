class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char,int> freq;
        for(char ch:s)
            freq[ch]++;
        unordered_map<int,vector<char>> group;
        for(auto i:freq)
            group[i.second].push_back(i.first);
        int k=-1,maxG=0;
        for(auto i: group){
            if(maxG<=i.second.size()){
                if(maxG==i.second.size())
                {
                    if(k<i.first)
                        k=i.first;
                    continue;
                }
                maxG=i.second.size();
                k=i.first;
            }
        }
        string ans="";
        for(auto i:freq){
            if(i.second==k)
                ans+=i.first;
        }
        return ans;
    }
};