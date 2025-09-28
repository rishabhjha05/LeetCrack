class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        if(n<3)
            return 0;
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int i=0,j=2;
        while(j<n){
            bool isValid=true;
            int a=nums[i],b=nums[i+1],c=nums[i+2];
            if((a+b<=c)||(a+c<=b)||(b+c<=a))
                isValid=false;
            if(isValid)
                return a+b+c;
            i++,j++;
        }
        return 0;
    }
};