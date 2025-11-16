class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size(),i=0;
        vector<int> found(n,0),ans;
        while(i<n)
            found[nums[i++]-1]+=1;
        i=0;
        while(i<n)
        {
            if(found[i]==2)
                ans.push_back(i+1);
            i++;
        }
        i=0;
        while(i<n)
        {
            if(found[i]==0)
                ans.push_back(i+1);
            i++;
        }
        return ans;
    }
};