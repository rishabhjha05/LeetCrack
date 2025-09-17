class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        
    int n = heights.size(), i = n - 1;
    vector<int> sol(n);
    stack<int> st;
    while (i >= 0)
    {
        int count = 0;
        while (st.size() != 0 && st.top() < heights[i])
        {
            st.pop();
            count++;
        }
        if (st.size() != 0)
            count++;
        st.push(heights[i]);
        sol[i] = count;
        i--;
    }
    return sol;
    }
};