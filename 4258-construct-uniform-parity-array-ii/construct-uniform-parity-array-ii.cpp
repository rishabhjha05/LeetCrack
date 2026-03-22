class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int e=0,o=0;
        priority_queue<int,vector<int>, greater<int>> q;
        for(int ele : nums1){
            if(ele%2==1)
                q.push(ele);
        }
        for(int ele : nums1){
            if(ele%2==0 && q.size()>0 && ele<=q.top())
                return 0;
        }
        return 1;
    }
};