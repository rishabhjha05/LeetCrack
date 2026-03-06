class Solution {
public:
    int countPoints(string rings) {
        map<int,map<char,int>> freq;
        int n=rings.size(),count=0;
        for(int i=0;i<n;i+=2)
            freq[rings[i+1]-'0'][rings[i]]++;
        for(auto itr: freq)
            if(itr.second.size()==3)
                count++;
        return count;
    }
};