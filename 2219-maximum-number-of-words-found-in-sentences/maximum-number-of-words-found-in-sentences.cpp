class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size(),count=0;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(char ch : sentences[i])
                if(ch==' ')
                    cnt++;
            count=max(count,cnt);
        }
        return count+1;
    }
};