class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0;
        for(int ele : arr){
            if(ele%2==1)
                count++;
            else
                count=0;
            if(count==3)
                return true;
        }
        return 0;
    }
};