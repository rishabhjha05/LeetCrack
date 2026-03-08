class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        long long sum=0,n=nums.size(),m=1,i;
        vector<long long> pref;
        for(int ele : nums){
            pref.push_back(sum);
            sum+=ele;
        }
        vector<long long> suff(n,sum);
        for(i=n-1;i>=0;i--){
            suff[i]=m;
            if(m>sum/nums[i])
                break;
            else
                m*=nums[i];
        }
        if(i>=0)
            suff[i]=m;
        for(int i=0;i<n;i++){
            if(pref[i]==suff[i])
                return i;
        }
        return -1;
    }
};