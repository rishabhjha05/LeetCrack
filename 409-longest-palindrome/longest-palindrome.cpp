class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> freq;
        int odd=0,count=0;
        for(char ch:s)
            freq[ch]++;
        for(auto i:freq){
            if(i.second%2==0)
                count+=i.second;
            else{
                odd=1;
                count+=i.second-1;
            }
        }
        if(odd)
            count++;
        return count;
    }
};