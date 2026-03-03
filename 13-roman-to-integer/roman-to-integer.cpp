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
        int n=value.size(),i=n-1,prev=INT_MIN,ans=0;
        while(i>=0){
            if(value[i]>=prev)
                ans+=value[i];
            else
                ans-=value[i];
            prev=value[i--];
        }
        return ans;

    }
};