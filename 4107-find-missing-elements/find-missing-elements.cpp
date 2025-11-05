class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> freq;
        int s=INT_MAX,l=INT_MIN;
        for(int ele : nums){
            s=min(ele,s);
            l=max(ele,l);
            freq[ele]++;
        }
        for(int i=s;i<=l;i++)
            if(freq[i]==0)
                ans.push_back(i);
        return ans;
    }
};