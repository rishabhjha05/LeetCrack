class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int sum=0,Tsum=0,i=0;
        for(int ele : nums)
            Tsum+=ele;
        for(int ele : nums)
            ans.push_back(((i*ele)-sum)+(Tsum-sum-(n-i)*ele)),sum+=ele,i++;
        return ans;
    }
};