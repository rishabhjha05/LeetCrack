class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int sum=0,n=nums.size();
        for(int i=0;i<n;i++){
            int idx1=i-k,idx2=i+k;
            cout<<"hi\n";
            if((idx1>=n || idx1<0 ) && (idx2<0 || idx2>=n))
                sum+=nums[i];
            else if(idx1<n && idx2<n && idx1>=0 && idx2>=0){
                if(nums[idx1]<nums[i] && nums[idx2]<nums[i])
                    sum+=nums[i];
            }
            else if(idx1<n && idx1>=0 && nums[idx1]<nums[i])
                sum+=nums[i];
            else if(idx2<n && idx2>=0 && nums[idx2]<nums[i])
                sum+=nums[i];
        }
        return sum;
    }
};