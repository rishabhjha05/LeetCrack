class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int esum=0,sum=0;
        for(int ele:nums){
            esum+=ele;
            while(ele){
                sum+=ele%10;
                ele/=10;
            }
        }
        return abs(esum-sum);
    }
};