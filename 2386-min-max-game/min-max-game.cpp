class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        while(nums.size()>1){
            vector<int> vec;
            int n=nums.size();
            for(int i=0;i<n/2;i++){
                if(i%2)
                    vec.push_back(max(nums[2*i],nums[2*i+1]));
                else
                    vec.push_back(min(nums[2*i],nums[2*i+1]));
            }
            nums=vec;
        }
        return nums[0];
    }
};