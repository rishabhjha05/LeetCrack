class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int ele : nums){
            vector<int> vec;
            while(ele){
                vec.push_back(ele%10);
                ele/=10;
            }
            int n=vec.size(),i=n-1;
            while(i>=0)
                ans.push_back(vec[i--]);

        }
        return ans;
    }
};