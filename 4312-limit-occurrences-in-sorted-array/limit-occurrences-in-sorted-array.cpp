class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> ans;
        int i=0,m=k,n=nums.size();
        while(i<n){
            int num=nums[i];
            while(i<n && nums[i]==num){
                if(k>0)
                    ans.push_back(num),k--;
                i++;
            }
            k=m;
        }
        return ans;
    }
};