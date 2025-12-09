class Solution {
public:
    int solve(int a,int b,char ch){
        switch(ch){
            case '+':
                return a+b;
            case '-':
                return a-b;
            case '/':
                return a/b;
            case '*':
                return a*b;
        }
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> num;
        stack<char> opr;
        for(string str:tokens){
            if(str=="+"||str=="-"||str=="*"||str=="/")
            {
                int b=num.top();
                num.pop();
                int a=num.top();
                num.pop();
                num.push(solve(a,b,str[0]));
            }
            else
                num.push(stoi(str));
        }
        return num.top();
    }
};