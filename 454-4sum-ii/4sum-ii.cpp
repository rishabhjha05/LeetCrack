class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int count=0,n=nums1.size();
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                freq[nums1[i]+nums2[j]]++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int sum=nums3[i]+nums4[j];
                if(freq[-1*sum]>=1)
                    count+=freq[-1*sum];
            }
        }
        return count;
    }
};