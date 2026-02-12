class Solution {
public:
    bool isEven(char ch){
        int num=ch-'0';
        if(num%2==0)
            return 1;
        return 0;
    }
    string largestOddNumber(string num) {
        int n=num.size(),i=n-1,j=0;
        while(i>=0 && isEven(num[i]))
            i--;
        string ans="";
        while(j<=i)
            ans+=num[j++];
        return ans;
    }
};