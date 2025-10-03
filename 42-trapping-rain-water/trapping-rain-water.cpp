class Solution {
public:
    int trap(vector<int>& height) {
         int n = height.size(), prev_max = height[0], max_next = height[n - 1], sum = 0;
    vector<int> prev_greatest(n, 0);
    for (int i = 1; i < n; i++)
    {
        prev_greatest[i] = prev_max;
        if (height[i] > prev_max)
            prev_max = height[i];
    }
    for(int ele : prev_greatest)
        cout<<ele<<" ";
    for (int j = n - 2; j >= 0; j--)
    {
        if (max_next < prev_greatest[j])
            prev_greatest[j] = max_next;
        if (max_next < height[j])
            max_next = height[j];
    }
   
    for (int l = 0; l < n - 1; l++)
    {
        if (height[l] <= prev_greatest[l])
            sum += (prev_greatest[l] - height[l]);
    }
    return sum;
    }
};