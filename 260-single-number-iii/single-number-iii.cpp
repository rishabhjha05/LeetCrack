class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int zor=0,mask=1,zor2=0;
        for(int ele : nums)
            zor^=ele;
        while((mask&zor)==0)
            mask<<=1;
        for(int ele : nums)
            if((mask&ele)!=0)
                zor2^=ele;
        return {zor^zor2,zor2};
    }
};