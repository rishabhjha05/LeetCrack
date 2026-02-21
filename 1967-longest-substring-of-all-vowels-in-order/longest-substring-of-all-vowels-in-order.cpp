class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int ans=0,i=0,n=word.size(),len=0;
        while(i<n && word[i]!='a')
            i++;
        while(i<n){
            while(i<n && word[i]=='a')
                i++,len++;
            if(word[i]!='e'){
                len=0;
                while(i<n && word[i]!='a')
                    i++;
                continue;
            }
            else
                while(i<n && word[i]=='e')
                    i++,len++;
            if(word[i]!='i'){
                len=0;
                while(i<n && word[i]!='a')
                    i++;
                continue;
            }
            else
                while(i<n && word[i]=='i')
                    i++,len++;
            if(word[i]!='o'){
                len=0;
                while(i<n && word[i]!='a')
                    i++;
                continue;
            }
            else
                while(i<n && word[i]=='o')
                    i++,len++;
            if(word[i]!='u'){
                len=0;
                while(i<n && word[i]!='a')
                    i++;
                continue;
            }
            else
                while(i<n && word[i]=='u')
                    i++,len++;
            ans=max(ans,len);
            len=0;
        }
        return ans;
    }
};