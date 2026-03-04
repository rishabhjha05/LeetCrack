class Solution {
public:
    string frequencySort(string s) {
        map<char,int> freq;
        for(char ch: s)
            freq[ch]++;
        priority_queue<pair<int,char>> pq;
        for(auto itr: freq)
            pq.push({itr.second,itr.first});
        string ans="";
        while(pq.size()!=0){
            int i=pq.top().first;
            char ch=pq.top().second;
            string str="";
            pq.pop();
            while(i>0)
                str+=ch,i--;
            ans+=str;
        }
        return ans;
    }
};