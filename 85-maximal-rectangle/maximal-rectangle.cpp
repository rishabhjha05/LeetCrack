class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {  
        int n = heights.size(), i = 0, maxArea = 0;
        vector<int> prevS(n), nextS(n), maxBreath(n);
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
        st = stack<int>();
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
            maxArea = max(maxArea, maxBreath[i] * heights[i++]);
        return maxArea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size(),m=matrix[0].size(),ans=0;
        vector<int> height(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]!='0')
                    height[j]++;
                else
                    height[j]=0;
            }
            ans=max(ans,largestRectangleArea(height));
        }
        return ans;
    }
};