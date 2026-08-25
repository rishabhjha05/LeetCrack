class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int ele : nums)
            freq[ele]++;
        int i=k;
        while(true){
                if(!freq[i])
                    return i;
                i+=k;
        }
        return 0;
    }
};