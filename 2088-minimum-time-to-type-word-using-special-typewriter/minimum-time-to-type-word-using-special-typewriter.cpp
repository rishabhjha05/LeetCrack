class Solution {
public:
    int minTimeToType(string word) {
        int time=0;
        char on='a';
        for(char ch: word){
            int c=abs(on-ch);
            int ac=26-c;
            time+=(min(ac,c)+1);
            on=ch;
        }
        return time;
    }
};