class Solution {
public:
    int prio(char ch){
        if(ch=='/'||ch=='*')
            return 1;
        else
            return 0;
    }
    int solve(int val1,int val2,char opr){
        switch(opr){
            case '+':
                return val1+val2;
            case '-':
                return val1-val2;
            case '/':
                return val1/val2;
            case '*':
                return val1*val2;
        }
        return 1;
    }
    int calculate(string s) {
        stack<int> val;
        stack<char> opr;
        int n=s.size(),i=0;//n=5
        while(i<n){
            // if(s[i]>47 && s[i]<58 && opr.size()==0 && val.size()!=0){
            //     int x=val.top();
            //     x*=10;
            //     val.pop();
            //     x+=(s[i]-'0');
            //     val.push(x);
            // }
            // else if(s[i]>47 && s[i]<58 )
            //     val.push(s[i]-'0');
            if(s[i]>47 && s[i]<58){
                int x=0;
            while(i<n && s[i]>47 && s[i]<58){
                x*=10;
                x+=s[i++]-'0';
            }
            val.push(x);
            i--;
            }
            else if(opr.size()==0 && s[i]!=' ')
                opr.push(s[i]);
            else if(s[i]!=' '){
                while(opr.size()!=0 && prio(s[i])<=prio(opr.top()))
                {
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    val.push(solve(val1,val2,opr.top()));
                    opr.pop();
                }
                opr.push(s[i]);
            }
            i++;
        }
        while(opr.size()!=0)
        {
            int val2=val.top();
            val.pop();
            int val1=val.top();
            val.pop();
            val.push(solve(val1,val2,opr.top()));
            opr.pop();
        }
        return val.top();
    }
};