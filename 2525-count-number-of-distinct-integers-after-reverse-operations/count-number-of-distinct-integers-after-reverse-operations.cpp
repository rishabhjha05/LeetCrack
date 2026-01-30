class Solution {
public:
    int rev(int n){
        int r=0;
        while(n>0){
            r*=10;
            r+=n%10;
            n/=10;
        }
        return r;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int i=0,n=nums.size(),count=0;
        unordered_map<int,int> freq;
        for(int ele : nums){
            int r=rev(ele);
            if(freq[ele]<=0)
                count++;
            freq[ele]++;
            if(freq[r]<=0)
                count++;
            freq[r]++;
        }
        return count;
    }
};