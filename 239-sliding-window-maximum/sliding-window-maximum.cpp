class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       
    int n = nums.size(), i = n - 1,j=0;
    vector<int> NextGi(n), sol;
    stack<int> st;
    while (i >= 0)
    {
        while (st.size() != 0 && nums[st.top()] <= nums[i])
            st.pop();
        if (st.size() != 0)
            NextGi[i] = st.top();
        else
            NextGi[i] = n;
        st.push(i);
        i--;
    }
    i = 0;
    while (i <= n - k)
    {
        if(j<i)
            j=i;
        int mx = nums[j];
        while (j<i+k)
        {
            mx = nums[j];
            if (NextGi[j] < i + k)
                j = NextGi[j];
            else
                break;
        }
        sol.push_back(mx);
        i++;
    }
    return sol;
    }
};