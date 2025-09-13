class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        for(int i=0;i<s.size();i++){
            int j=0;
            while(j+1<s.size()){
                char temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                j++;
            }
            if(s==goal)
                return true;
        }
        return false;
    }
};