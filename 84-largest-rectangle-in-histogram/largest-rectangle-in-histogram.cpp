class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
    int n = heights.size(), i = 0, mxarea = INT_MIN;
    vector<int> prevS(n), nextS(n), maxBreath(n), maxArea(n);
    stack<int> st;
    while (i < n)
    {
        while (st.size() != 0 && heights[st.top()] >= heights[i])
            st.pop();
        if (st.size() == 0)
            prevS[i] = -1;
        else
            prevS[i] = st.top();
        st.push(i++);
    }
    i--;
    while(st.size()>0)
        st.pop();
    while (i >= 0)
    {
        while (st.size() != 0 && heights[st.top()] >= heights[i])
            st.pop();
        if (st.size() == 0)
            nextS[i] = n;
        else
            nextS[i] = st.top();
        st.push(i--);
    }
    i = 0;
    while (i < n)
    {
        maxBreath[i] = nextS[i] - prevS[i] - 1;
        i++;
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