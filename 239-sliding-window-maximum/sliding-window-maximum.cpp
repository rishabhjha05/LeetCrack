class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
    int n = nums.size(), i = n - 1;
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
    i=0;
    while (i <= n - k)
    {
        int mx = nums[i], j = i;
        while (true)
        {
            if (NextGi[j] < i + k)
            {
                mx = nums[NextGi[j]];
                j = NextGi[j];
            }
            else
                break;
        }
        sol.push_back(mx);
        i++;
    }
    return sol;
    }
};