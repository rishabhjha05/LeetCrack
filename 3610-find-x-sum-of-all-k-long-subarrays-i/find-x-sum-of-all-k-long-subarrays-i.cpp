class Solution {
public:
    int xSum(vector<int>& nums,int i,int j,int k){
        vector<int> vec(51,0);
        for(i;i<j;i++)
            vec[nums[i]]++;
        int sum=0,count=0;
        while(count<k){
            int max=-1,idx=0;
            for(i=1;i<51;i++)
                if(vec[i]>max)
                {
                    max=vec[i];
                    idx=i;
                }
                else if(vec[i]==max && i>idx)
                    idx=i;
            sum+=max*idx;
            vec[idx]=0;
            count++;
        }
        return sum;
    }
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        vector<int> ans(n-k+1);
        for(int i=0;i<n-k+1;i++)
            ans[i]=xSum(nums,i,i+k,x);
        return ans;
    }
};