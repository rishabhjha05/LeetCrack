class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st,sum;
        for(string str: operations){
            if(str=="+")
            {
                cout<<"ADD PERF\n";
                int a=st.top();
                st.pop();
                int b=st.top();
                st.push(a);
                st.push(a+b);
                sum.push(sum.top()+a+b);
            }
            else if(str=="D"){
                cout<<"D PERF\n";
                int a=2*st.top();
                st.push(a);
                sum.push(a+sum.top());
            }
            else if(str=="C"){
                cout<<"C PERF\n";
                st.pop();
                sum.pop();
            }
            else
            {
                cout<<"INT ADDED\n";
                int a=stoi(str);
                st.push(a);
                if(sum.size()==0)
                    sum.push(a);
                else
                sum.push(sum.top()+a);
            }
        }
        if(sum.size()!=0)
            return sum.top();
        return 0;
    }
};