class Solution {
public:
    int isit(int num){
        int count=0,sum=0;
        for(int i=1;i<=sqrt(num);i++){
            if(num%i==0 && i!=sqrt(num))
                count+=2,sum+=i,sum+=num/i;
            else if(num%i==0)
                count++,sum+=i;
        }
        if(count==4)
            return sum;
        return 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(int ele : nums){
            int x=isit(ele);
            if(x!=0)
                sum+=x;
        }
        return sum;
    }
};