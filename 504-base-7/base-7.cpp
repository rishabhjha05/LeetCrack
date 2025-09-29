class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
            return "0";
        string base7="";
        bool isNeg=false;
            if(num<0){
                isNeg=true;
                num*=-1;
            }
            while(num){
            base7+='0'+num%7;
            num/=7;
            }
            if(isNeg)
                base7+='-';
            reverse(base7.begin(),base7.end());
    
        return base7;
    }
};