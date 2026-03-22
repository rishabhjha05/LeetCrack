class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        return 1;
        int e=0,o=0;
        for(int ele : nums1)
            if(ele%2==0)
                e++;
            else
                o++;
        if(e==0 || o==0)
            return 1;
        return 1;
    }
};