class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int i=0,j=nums.size()-1;
        while(i<=j){
            if(abs(nums[i])>abs(nums[j])){
                ans.push_back(nums[i]*nums[i]);
                i++;
            }
            else{
                ans.push_back(nums[j]*nums[j]);
                j--;
            }
        }
        i=0,j=ans.size()-1;
        while(i<j){
            int temp=ans[i];
            ans[i++]=ans[j];
            ans[j--]=temp;
        }
        return ans;
    }
};