class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size(),low=0,high=n-1,neg=0,pos=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<0){
                low=mid+1;
                neg=mid+1;
            }
            else if(nums[mid]>0){
                high=mid-1;
                pos=n-mid;
            }
            else
            {
                neg=mid,pos=n-mid-1;
                int i=mid-1;
                while(i>=0 && nums[i]==0)
                    i--,neg--;
                i=mid+1;
                while(i<n && nums[i]==0)
                    i++,pos--;
                return max(neg,pos);
            }
        }
        return max(neg,pos);
    }
};