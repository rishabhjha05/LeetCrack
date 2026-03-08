class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        long long sum=0,n=nums.size(),m=1;
        vector<long long> pref,suff(n);
        for(int ele : nums){
            pref.push_back(sum);
            sum+=ele;
        }
        for(int i=n-1;i>=0;i--){
            suff[i]=m;
            if(m>sum/nums[i])
                m=sum;
            else
                m*=nums[i];
        }
        for(int i=0;i<n;i++){
            if(pref[i]==suff[i])
                return i;
        }
        return -1;
    }
};