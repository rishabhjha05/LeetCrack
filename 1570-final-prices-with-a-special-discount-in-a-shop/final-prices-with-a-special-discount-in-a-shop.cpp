class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
    int i = prices.size() - 1;
    vector<int> discount(prices.size(), 0);
    stack<int> st;
    while (i >= 0)
    {
        while (st.size() != 0 && st.top() > prices[i])
            st.pop();
        if (st.size() != 0)
            discount[i] = st.top();
        st.push(prices[i]);
        i--;
    }
    for(int i=0;i<prices.size();i++)
        prices[i]-=discount[i];
    return prices;
    }
};