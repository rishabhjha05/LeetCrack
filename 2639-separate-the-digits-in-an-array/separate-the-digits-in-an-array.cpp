class Solution {
public:
    int num(char ch){
        
        return ch-'0';
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        string str="";
        for(int ele : nums)
            str+=to_string(ele);
        for(char ch: str)
            ans.push_back(num(ch));
        return ans;
    }
};