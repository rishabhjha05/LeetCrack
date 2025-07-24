class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& vec, int n) {
       
    int n2 = vec.size(), i = 0;
    vector<int> ans(n, 0);
    while (i < n2)
    {
        int start = vec[i][0] - 1, end = vec[i][1] - 1, seat = vec[i][2];
        if (start>=0)
            ans[start] += seat;
        if (end<n-1)
            ans[end + 1] -= seat;
        i++;
    }
    i = 1;
    while (i < n)
    {
        ans[i] += ans[i - 1];
        i++;
    }
    return ans;

    }
};