class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mn=INT_MAX,mx=INT_MIN;
        vector<int> ans;
        unordered_map<int,bool> isPresent;
        for(int ele : nums){
            mx=max(mx,ele);
            mn=min(mn,ele);
            isPresent[ele]=true;
        }
        for(int i=mn+1;i<mx;i++){
            if(!isPresent[i])
                ans.push_back(i);
        }
        return ans;
    }
};