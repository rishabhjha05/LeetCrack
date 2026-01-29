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
        vector<int> vec;
        int i=0,n=nums.size();
        while(i<n)
            vec.push_back(nums[i++]);
        i=0;
        while(i<n)
            vec.push_back(rev(nums[i++]));
        for(int ele : vec)
            cout<<ele<<" ";
        int count=0;
        unordered_map<int,int> freq;
        for(int ele : vec){
            if(freq[ele]<=0)
                count++;
            freq[ele]++;
        }
        return count;
    }
};