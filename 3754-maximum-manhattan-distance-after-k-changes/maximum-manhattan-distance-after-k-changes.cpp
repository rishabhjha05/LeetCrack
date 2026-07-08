class Solution {
public:   
    int solve(string s,int k,char a,char b){
        int ans=0,curr=0;
        for(char ch: s){
            if(ch==a || ch==b)
                curr++;
            else if(k)
                curr++,k--;
            else curr--;
            ans=max(ans,curr);
        }
        return ans;
    }      
    int maxDistance(string s, int k) {
        return max({
            solve(s, k, 'N', 'E'), 
            solve(s, k, 'N', 'W'), 
            solve(s, k, 'S', 'E'), 
            solve(s, k, 'S', 'W') 
        });
    }
};