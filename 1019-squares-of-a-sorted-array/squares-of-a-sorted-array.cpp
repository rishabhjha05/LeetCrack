class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(int ele : nums)
            ans.push_back(ele*ele);
        sort(ans.begin(),ans.end());
        return ans;
    }
};