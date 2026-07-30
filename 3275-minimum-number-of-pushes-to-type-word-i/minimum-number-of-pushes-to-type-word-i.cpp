class Solution {
public:
    int minimumPushes(string word) {
        priority_queue<pair<char, int>, vector<pair<char, int>> > pq;
        unordered_map<char,int> freq;
        for(char ch: word)
            freq[ch]++;
        for(auto itr: freq)
            pq.push({itr.second,itr.first});
        
        int count=1,m=1,ans=0;
        while(!pq.empty()){
            if(count==9)
                count=1,m++;
            ans+=m*pq.top().first;
            count++;
            pq.pop();
        }
        return ans;
    }
};