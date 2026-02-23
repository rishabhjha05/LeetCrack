class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> lt,gt;
        for(int ele : nums){
            if(ele<pivot)
                lt.push_back(ele);
            else if(ele>pivot)
                gt.push_back(ele);
        }
        int n=nums.size(),i=0;
        for(int ele : lt)
            nums[i++]=ele;
        for(int j=0;j<n-(lt.size()+gt.size());j++)
            nums[i++]=pivot;
        for(int ele : gt)
            nums[i++]=ele;
        return nums;
    }
};