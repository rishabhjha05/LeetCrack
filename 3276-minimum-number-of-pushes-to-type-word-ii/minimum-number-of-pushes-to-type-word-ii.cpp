class Solution {
public:
    int minimumPushes(string word) {
        priority_queue<int> pq;
        unordered_map<char,int> freq;
        for(char ch: word)
            freq[ch]++;
        for(auto itr: freq)
            pq.push(itr.second);
        long long count=1,m=1,ans=0;
        while(!pq.empty()){
            if(count==9)
                count=1,m++;
            ans+=m*pq.top();
            count++;
            pq.pop();
        }
        return ans;
    }
};