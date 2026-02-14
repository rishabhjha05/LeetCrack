class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string,int> freq;
        for(string str: words){
            string s="";
            if(str.size()>=k){
                for(int i=0;i<k;i++)
                    s+=str[i];
                freq[s]++;
            }
        }
        int count=0;
        for(auto i: freq)
            if(i.second>=2)
                count++;
        return count;
    }
};