class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const unsigned int M = 1000000007;
        unordered_map<int,long long> left_freq,right_freq;
        long long n=nums.size(),count=0;
        for(int i=0;i<n;i++)
            right_freq[nums[i]]++;
        for(int i=0;i<n;i++){
            int num=nums[i];
            right_freq[num]--;
            if(left_freq[2*num]>=1 && right_freq[2*num]>=1)
                count+=left_freq[2*num]*right_freq[2*num];
            left_freq[num]++;
        }
        return count%M;
    }
};