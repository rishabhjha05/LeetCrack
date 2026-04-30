class Solution {
public:
    int partition(vector<int>& nums,int left,int right){
        int p=nums[right],idx=0,i,j;
        for(i=left;i<right;i++)
            if(nums[i]<=p)
                idx++;
        idx+=left;
        swap(nums[idx],nums[right]);
        i=left,j=right;
        while(i<idx && j>idx){
            while(i<idx & nums[i]<=p)
                i++;
            while(j>idx && nums[j]>p)
                j--;
            if(i<idx && j>idx)
                swap(nums[i],nums[j]);
        }
        return idx;
    }
    int quickS(vector<int>& nums,int left,int right,int k){
        if(left==right)
            return nums[left];
        int idx=partition(nums,left,right);
        if(idx==k)
            return nums[idx];
        else if(idx<k)
            return quickS(nums,idx+1,right,k);
        else
            return quickS(nums,left,idx-1,k);
    }
    int minMoves2(vector<int>& nums) {
        int n=nums.size(), mid=quickS(nums,0,n-1,n/2),ans=0;
        for(int ele : nums)
            ans+=max(ele,mid)-min(ele,mid);
        return ans;
    }
};