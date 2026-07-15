class Solution {
public:
    int reverse(int ele){
        int num=0;
        while(ele)
            num*=10,num+=ele%10,ele/=10;
        return num;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,int> idx;
        int n=nums.size(),ans=INT_MAX;
        for(int i=0;i<n;i++){
            int rev=reverse(nums[i]);
            if(idx[nums[i]]!=0)
                ans=min(ans,i+1-idx[nums[i]]);
            idx[rev]=i+1;
        }
        if(ans==INT_MAX)
            return -1;
        return ans;
        
    }
};