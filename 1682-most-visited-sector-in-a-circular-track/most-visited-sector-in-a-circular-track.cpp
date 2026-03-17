class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        map<int,int> freq;
        int mx=-1,m=rounds.size(),prev=rounds[0],j=1;
        while(j<m){
            int k=prev;
            while(k!=rounds[j])
            {
                freq[k]++;
                mx=max(mx,freq[k]);
                k++;
                if(k==n+1)
                    k=1;
            }
            prev=rounds[j++];
        }
        freq[rounds[m-1]]++;
            mx=max(mx,freq[rounds[m-1]]);
        // cout<<mx;
        vector<int> ans;
        for(auto itr: freq)
            if(itr.second==mx)
                ans.push_back(itr.first);
        return ans;
    }
};