class Solution {
public:
    int possibleStringCount(string word) {
        map<char,int>  freq;
        int ans=0,n=word.size();
        for(int i=0;i<n;){
            char ch=word[i];
            int count=0;
            while(i<n && word[i]==ch)
                i++,count++;
            ans+=count-1;
        }
        return ans+1;
    }
};