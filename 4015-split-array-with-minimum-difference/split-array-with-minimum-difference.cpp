class Solution {
public:
    long long splitArray(vector<int>& nums) {
        long long i=0,sumLeft=0,sumRight=0,n=nums.size(),pIdx=-1,ans=LLONG_MAX;
        for(i;i<n-1;i++){
            sumLeft+=nums[i];
            if(nums[i]>=nums[i+1])
                break;
        }
        pIdx=i;
        cout<<sumLeft;
        if(i==n-1)
            return abs(sumLeft-nums[n-1]);
        i++;
        for(i;i<nums.size()-1;i++){
            sumRight+=nums[i];
            if(nums[i]<=nums[i+1])
                return -1;
        }
        sumRight+=nums[i];
        ans=min(ans,abs(sumLeft-sumRight));
        while(pIdx>=0 && nums[pIdx]>nums[pIdx+1]){
            sumLeft-=nums[pIdx];
            sumRight+=nums[pIdx];
            pIdx--;
            ans=min(ans,abs(sumLeft-sumRight));
            cout<<"HI\n";
        }
        return ans;
    }
};