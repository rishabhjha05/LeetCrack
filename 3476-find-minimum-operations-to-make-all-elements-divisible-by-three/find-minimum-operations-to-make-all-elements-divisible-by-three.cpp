class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(int ele : nums){
            if(ele%3!=0){
                count++;
            }
        }
        return count;
    }
};