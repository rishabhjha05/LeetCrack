class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> freq;
        for(int ele : nums)
            if(ele%2==0)
                freq[ele]++;
        if(freq.size()==0)
            return -1;
        int ans=-1,f=-1;
        for(auto itr: freq)
            if(f<itr.second)
                ans=itr.first,f=itr.second;
            else if(f==itr.second)
                ans=min(ans,itr.first);
        return ans;
    }
};