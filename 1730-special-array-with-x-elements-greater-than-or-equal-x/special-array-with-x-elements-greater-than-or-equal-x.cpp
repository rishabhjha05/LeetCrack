class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<=n;i++){
            int l=0,h=n-1,idx=-1;
            while(l<=h){
                int mid=(l+h)/2;
                if(nums[mid]<i)
                    l=mid+1;
                else if(nums[mid]>=i)
                    idx=mid,h=mid-1;
            }
            if(i==(n-idx))
                return i;
        }
        return -1;
    }
};