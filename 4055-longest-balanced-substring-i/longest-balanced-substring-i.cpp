class Solution {
public:
    bool valid(unordered_map<char,int>& freq){
        int f=-1;
        for(auto i: freq){
            if(f==-1)
                f=i.second;
            else if(f!=i.second)
                return 0;
        }
        return 1;
    }
    int longestBalanced(string s) {
        int n=s.size(),ans=1;
        for(int i=0;i<n;i++){
            int j=i;
            unordered_map<char,int> freq;
            while(j<n){
                freq[s[j]]++;
                if(valid(freq))
                    ans=max(ans,j-i+1);
                j++;
            }
        }
        return ans;
    }
};