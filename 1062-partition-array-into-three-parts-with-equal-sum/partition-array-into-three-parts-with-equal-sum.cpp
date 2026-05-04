class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int ele : arr)
            sum+=ele;
        if(sum%3!=0)
            return 0;
        int sec=0,count=0;
        for(int ele : arr){
            sec+=ele;
            if(sec==sum/3)
                count++,sec=0;
        }
        return count>=3;
    }
};