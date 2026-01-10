class Solution {
public:
    bool check(vector<int> vec){
        for(int ele : vec)
            if(ele==0)
                return false;
        return 1;
    }
    int countVowelSubstrings(string word) {
        int n=word.size(),ans=0;
        for(int i=0;i<n-4;i++){
            vector<int> freq(5,0);
            for(int j=i;j<n;j++){
                if(word[j]=='a')
                    freq[0]++;
                else if(word[j]=='e')
                    freq[1]++;
                else if(word[j]=='i')
                    freq[2]++;
                else if(word[j]=='o')
                    freq[3]++;
                else if(word[j]=='u')
                    freq[4]++;
                else
                    break;
                if(check(freq))
                    ans++;
            }
        }
        return ans;
    }
};