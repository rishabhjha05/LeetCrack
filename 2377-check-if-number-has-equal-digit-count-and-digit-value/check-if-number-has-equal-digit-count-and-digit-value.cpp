class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char,int> freq;
        int n=num.size();
        for(int i=0;i<n;i++)
            freq[num[i]]++;
        for(int i=0;i<n;i++){
            if(freq[(char)i+'0']!=(int)num[i]-'0')
                return false;
        }
        return true;
    }
};