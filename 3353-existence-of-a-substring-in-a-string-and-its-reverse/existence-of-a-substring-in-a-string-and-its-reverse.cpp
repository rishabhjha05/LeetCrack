class Solution {
public:
    bool isSubstringPresent(string s) {
        int n=s.size(),i=0,j=1;
        unordered_map<string,int> freq;
        while(j<n){
            string str="";
            str+=s[i];
            str+=s[j];
            freq[str]++;
            i++,j++;
        }
        i=n-1,j=i-1;
        while(j>=0){
            string str="";
            str+=s[i];
            str+=s[j];
            if(freq[str]>=1)
                return 1;
            i--,j--;
        }
        return 0;
    }
};