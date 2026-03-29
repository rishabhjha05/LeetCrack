class Solution {
public:
    int countAsterisks(string s) {
        int count=0,flag=1,ans=0;
        for(char ch : s){
            if(ch=='|' && flag)
                ans+=count,count=0,flag=0;
            else if(ch=='|')
                count=0,flag=1;
            else if(ch=='*')
                count++;
        }
        if(flag && count)
            ans+=count;
        return ans;
    }
};