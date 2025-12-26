class Solution {
public:
    int gcd(int a,int b){
        for(int i=min(a,b);i>=1;i--)
            if(a%i==0 && b%i==0)
                return i;
        return 1;
    }
    int findGCD(vector<int>& nums) {
        int mn=INT_MAX,mx=INT_MIN;
        for(int ele : nums)
        {
            mn=min(mn,ele);
            mx=max(mx,ele);
        }
        return gcd(mx,mn);
    }
};