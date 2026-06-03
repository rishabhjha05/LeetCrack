class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()==0)
            return m*n;
        int r=INT_MAX,c=INT_MAX;
        for(vector<int> vec: ops){
            if(r>vec[0])
                r=vec[0];
            if(c>vec[1])
                c=vec[1];
        }
        return r*c*1LL;
    }
};