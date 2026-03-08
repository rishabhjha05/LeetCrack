class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int ans=INT_MAX,idx=-1,i=0;
        for(int ele : capacity){
            if(ele>=itemSize && ans>ele){
                idx=i,ans=ele;}
        i++;
        }
        return idx;
    }
};