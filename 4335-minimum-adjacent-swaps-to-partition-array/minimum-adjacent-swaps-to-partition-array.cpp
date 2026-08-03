class Solution {
public:
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        long long r=0,m=0,n=nums.size(),count=0,mod=1e9+7;

        for(int ele : nums){
            if(ele>=a && ele<=b)
                count+=r%mod;
            else if(ele<a)
                count+=r+m;

            if(ele>b)
                r++;
            else if(ele>=a)
                m++;
            count%=mod;
        }
        return count;
    }
};