class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
    int n = heights.size(), i = n-1, mxarea = INT_MIN;
    vector<int> maxBreath(n), maxArea(n);
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
        maxArea[i] = maxBreath[i] * heights[i];
        i++;
    }
    i = 0;
    while (i < n)
        mxarea = max(mxarea, maxArea[i++]);
    return mxarea;
    }
};