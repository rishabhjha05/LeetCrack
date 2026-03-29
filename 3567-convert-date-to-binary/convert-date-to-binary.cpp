class Solution {
public:
    string convert(int day){
        string d="";
        while(day>1){
            d.push_back('0'+day%2);
            day/=2;
        }
        if(day==1)
            d.push_back('1');
        reverse(d.begin(),d.end());
        return d;
    }
    string convertDateToBinary(string date) {
        string ans="";
        int day=0;
        for(char ch: date){
            if(ch!='-'){
                day*=10;
                day+=ch-'0';
            }
            else
                ans+=convert(day),ans.push_back('-'),day=0;
        }
        ans+=convert(day),day=0;
        return ans;
    }
};