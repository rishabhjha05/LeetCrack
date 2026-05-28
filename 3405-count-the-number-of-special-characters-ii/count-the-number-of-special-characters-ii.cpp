class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int> idx;
        int n=word.size(),count=0;
        for(int i=0;i<n;i++){
            char ch=word[i];
            if(ch<=90 && idx[ch]==0)
                idx[ch]=i+1;
            else if(ch>90)
                idx[ch]=i+1;
        }
        for(auto itr: idx){
            char ch=itr.first;
            if(ch>90 && idx.count(ch-32) && itr.second<idx[ch-32])
                count++;
        }
        return count;
    }
};