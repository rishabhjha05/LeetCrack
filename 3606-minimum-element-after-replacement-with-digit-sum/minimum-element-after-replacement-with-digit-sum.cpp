class Solution {
public:
    int sum(int num){
        int s=0;
        while(num)
            s+=num%10,num/=10;
        return s;
    }
    int minElement(vector<int>& nums) {
        int mn=37;
        for(int ele : nums){
            mn=min(mn,sum(ele));
            if(mn==1)
                return 1;
        }
        return mn;
    }
};