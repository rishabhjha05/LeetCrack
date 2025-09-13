class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        unordered_map<int,int> freq1,freq2;
        for(int ele: nums1)
            freq1[ele]++;
        for(int ele: nums2)
            freq2[ele]++;
        if(nums1.size()<nums2.size()){
            for(int ele:nums1)
                if(freq1[ele]!=0 && freq2[ele]!=0){
                    vec.push_back(ele);
                    freq1[ele]=0;
                    freq2[ele]=0;
                }
        }
        else{
            for(int ele:nums2)
                if(freq1[ele]!=0 && freq2[ele]!=0){
                    vec.push_back(ele);
                    freq1[ele]=0;
                    freq2[ele]=0;
                }
        }
        return vec;
    }
};