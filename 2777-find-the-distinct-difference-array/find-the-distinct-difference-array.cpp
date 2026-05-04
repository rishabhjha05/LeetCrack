class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int count=0,n=nums.size();
        unordered_map<int,int> f1,f2;
        vector<int> pre,suff(n),ans;
        for(int ele : nums){
            if(f1[ele]==0)
                count++;
            pre.push_back(count);
            f1[ele]++;
        }
        count=0;
        for(int i=n-1;i>=0;i--){
            pre[i]-=count;
            if(f2[nums[i]]==0)
                count++;
            f2[nums[i]]++;
        }
        return pre;
    }
};