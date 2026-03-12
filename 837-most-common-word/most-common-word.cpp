class Solution {
public:
    bool isletter(char ch){
        if((ch>=97 && ch<129)||(ch>=65 && ch<97))
            return 1;
        return 0;
    }
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string,int> freq;
        int f=-1,n=paragraph.size();
        for(int i=0;i<n;){
            string str="";
            while(i<n && isletter(paragraph[i])){
                if((int)paragraph[i]<97)
                    paragraph[i]+=32;
                str+=paragraph[i++];
            }
            while(i<n && !isletter(paragraph[i]))
                i++;
            freq[str]++;
        }
        for(string str: banned)
            freq[str]=-1;
        string ans;
        for(auto itr: freq)
            if(itr.second>f)
                f=itr.second,ans=itr.first;
        return ans;
    }
};