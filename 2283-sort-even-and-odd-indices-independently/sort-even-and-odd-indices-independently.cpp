class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even,odd;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i%2==0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        int j=0,k=odd.size()-1;
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        for(int i=0;i<n;i++){
            if(i%2==0)
                nums[i]=even[j++];
            else
                nums[i]=odd[k--];
        }
        return nums;
    }
};