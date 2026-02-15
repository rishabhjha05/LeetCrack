class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        vector<int> freq(3,0);
        for(char ch: moves){
            if(ch=='R')
                freq[0]++;
            else if(ch=='L')
                freq[1]++;
            else
                freq[2]++;
        }
        freq[2]+=max(freq[0],freq[1]);
        return freq[2]-min(freq[0],freq[1]);
    }
};