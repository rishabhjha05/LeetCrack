class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sd=0,dd=0;
        for(int ele : nums){
            if(ele<10)
                sd+=ele;
            else
                dd+=ele;
        }
        return !(sd==dd);
        
    }
};