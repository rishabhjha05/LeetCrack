class Solution {
public:
    long long removeZeros(long long n) {
        long long rep=0;
        stack<int> st;
        while(n){
            if(n%10!=0)
                st.push(n%10);
            n/=10;
        }
        while(!st.empty()){
            rep*=10;
            rep+=st.top();
            st.pop();
        }   
        return rep;
    }
};