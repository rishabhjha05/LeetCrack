class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int ele : nums)
            cout<<ele<<" ";
        int i=1,n=nums.size();
        while(i<n){
            int temp=nums[i];
            nums[i]=nums[i-1];
            nums[i-1]=temp;
            i+=2;
        }
        return nums;
    }
};