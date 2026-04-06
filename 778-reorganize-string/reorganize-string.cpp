class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int,char>> q;
        map<char,int> freq;
        string ans="";
        for(char ch: s)
            freq[ch]++;
        for(auto itr: freq)
            q.push({itr.second,itr.first});
        while(q.size()>1){
            pair<int,char> p=q.top();
            q.pop();
            pair<int,char> p2=q.top();
            q.pop();
            p.first-=1;
            p2.first-=1;
            ans+=p.second;
            ans+=p2.second;
            if(p2.first>0)
                q.push(p2);
            if(p.first>0)
            q.push(p);
        }
        if(q.size()==0)
            return ans;
        else if(q.top().first>=2)
            return "";
        return ans+=q.top().second;
    }
};