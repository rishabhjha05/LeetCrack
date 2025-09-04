class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size(),i=n-1;
        vector<int> nextS(n);
        stack<int> st;
        while(i>=0){
            while(st.size()!=0 && st.top()>prices[i])
                st.pop();
            if(st.size()==0)
                nextS[i]=0;
            else
                nextS[i]=st.top();
            st.push(prices[i]);
            i--;
        }
        i=0;
        while(i<n){
            prices[i]-=nextS[i];
            i++;
        }
        return prices;
    }
};