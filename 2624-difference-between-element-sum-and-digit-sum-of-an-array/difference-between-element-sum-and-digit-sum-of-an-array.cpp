class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int esum=0;
        for(int ele:nums){
            esum+=ele;
            while(ele){
                esum-=ele%10;
                ele/=10;
            }
        }
        return abs(esum);
    }
};