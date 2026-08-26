class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,n=nums1.size(),m=nums2.size();
        double x=0;
        vector<int> sol;
        while(i<n&&j<m)
        {
            if(nums1[i]>nums2[j])
                sol.push_back(nums2[j++]);
            else if(nums1[i]<=nums2[j])
                sol.push_back(nums1[i++]);
        }
        while(i<n)
            sol.push_back(nums1[i++]);
        while(j<m)
            sol.push_back(nums2[j++]);
        if(sol.size()%2==0)
        {
            x+=sol[(n+m)/2];
            x+=sol[(n+m)/2-1];
            x/=2;
        }
        else 
            x=sol[(n+m)/2];
        return x;
    
    }
};