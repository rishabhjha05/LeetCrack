class Solution {
public:
    bool checkIfExist(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int ele : nums){
            freq[ele]++;
        }
        if(freq[0]>=2)
            return true;
        for(int ele : nums)
            if(ele!=0 && ele%2==0 && freq[ele/2]!=0)
                return true;
        return false;
    }
};