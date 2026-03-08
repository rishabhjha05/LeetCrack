class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string,int> freq;
        int i=0,n=senders.size(),f=-1;
        string name;
        for(int i=0;i<n;i++){
            int m=1;
            for(char ch: messages[i])
                if(ch==' ')
                    m++;
            freq[senders[i]]+=m;
        }
        for(auto itr: freq){
            if(f<=itr.second)
                name=itr.first,f=itr.second;
        }
        return name;
    }
};