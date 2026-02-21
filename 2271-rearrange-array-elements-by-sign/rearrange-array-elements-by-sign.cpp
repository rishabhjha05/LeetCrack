class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size(),i=0,j=0;
        vector<int> pos,neg;
        for(int ele : nums){
            if(ele<0)
                neg.push_back(ele);
            else
                pos.push_back(ele);
        }
        for(int k=0;k<n;){
            nums[k++]=pos[i++];
            nums[k++]=neg[j++];
        }
        return nums;
    }
};