class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(string str: operations){
            if(str=="+")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.push(a);
                st.push(a+b);
            }
            else if(str=="D"){
                int a=2*st.top();
                st.push(a);
            }
            else if(str=="C")
                st.pop();
            else
            {
                int a=stoi(str);
                st.push(a);
            }
        }
        int sum=0;
        while(st.size()!=0){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};