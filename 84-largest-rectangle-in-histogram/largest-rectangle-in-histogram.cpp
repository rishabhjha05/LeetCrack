class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
    int n = heights.size(), i = n-1, maxArea = INT_MIN;
    vector<int> maxBreath(n);
    stack<int> st;
    while(st.size()>0)
        st.pop();
    while (i >= 0)
    {
        while (st.size() != 0 && heights[st.top()] >= heights[i])
            st.pop();
        if (st.size() == 0)
            maxBreath[i] = n;
        else
            maxBreath[i] = st.top();
        st.push(i--);
    }
    i=0;
    while(st.size()>0)
        st.pop();
    while (i < n)
    {
        while (st.size() != 0 && heights[st.top()] >= heights[i])
            st.pop();
        if (st.size() != 0)
            maxBreath[i] -= (st.top()+1);
        st.push(i++);
    }
    i = 0;
    while (i < n)
    {
        maxArea = max(maxArea,maxBreath[i] * heights[i]);
        i++;
    }
    return maxArea;
    }
};