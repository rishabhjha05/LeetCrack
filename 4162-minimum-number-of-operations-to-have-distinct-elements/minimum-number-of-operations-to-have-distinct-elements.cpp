class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int ele : nums)
            freq[ele]++;
        int i=0,n=nums.size(),count=0,ans=0;
        while(i<=n-3){
            bool flag=false;
            for(int j=i;j<i+3;j++)
                if(freq[nums[j]]>1)
                    flag=true;
            count++;
            if(flag){
            freq[nums[i]]--;
            freq[nums[i+1]]--;
            freq[nums[i+2]]--;
            ans=count;
            }
            i+=3;
        }
        bool flag=false;
        while(i<n)
            if(freq[nums[i++]]>1)
                flag=true;
        if(flag)
            ans=count+1;
        return ans;
    }
};