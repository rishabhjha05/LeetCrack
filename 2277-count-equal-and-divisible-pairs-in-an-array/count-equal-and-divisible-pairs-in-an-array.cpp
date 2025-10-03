class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count=0,n=nums.size();
        for(int i=0;i<n-1;i++){
            cout<<"hi\n";
            for(int j=i+1;j<n;j++){
                if((i*j)%k==0 && nums[i]==nums[j])
                    count++;
            }
        }
        return count;
    }
};