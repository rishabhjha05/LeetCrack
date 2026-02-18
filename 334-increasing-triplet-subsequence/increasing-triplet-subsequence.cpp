class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int mn1=INT_MAX,mn2=INT_MAX;
        for(int ele : nums){
            if(ele<mn1)
                mn1=ele;
            if(ele<mn2 && ele!=mn1)
                mn2=ele;
            if(mn1<ele && mn2<ele)
                return 1;
        }
        return 0;
    }
};