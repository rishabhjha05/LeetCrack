class Solution {
public:
    int val(char ch){
        switch(ch){
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
        }
        return -1;
    }
    int romanToInt(string s) {
        vector<int> value;
        for(char ch: s)
            value.push_back(val(ch));
        int i=0,j=1,n=value.size(),ans=0;
        while(i<n || j<n){
            if(j<n && value[i]<value[j]){
                ans+=value[j]-value[i];
                i+=2,j+=2;
            }
            else{
                ans+=value[i];
                i++,j++;
            }
        }
        return ans;

    }
};