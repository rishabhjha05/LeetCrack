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
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> vec;
        for(vector<int> v: grid){
            for(int ele : v)
                vec.push_back(ele);
        }
        int ans=0,n=vec.size(),y=quickS(vec,0,n-1,n/2);
        sort(vec.begin(),vec.end());
        cout<<y<<vec[n/2];
        for(vector<int> v: grid){
            for(int ele : v){
                if(abs(y-ele)%x!=0)
                    return -1;
                ans+=abs(y-ele)/x;
            }
        }
        return ans;
    }
};