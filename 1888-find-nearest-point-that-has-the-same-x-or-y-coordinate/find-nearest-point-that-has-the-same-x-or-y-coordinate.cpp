class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int idx=-1,dist=INT_MAX,i=0;
        for(vector<int> vec: points){
            int d=abs(x-vec[0])+abs(y-vec[1]);
            if((x==vec[0] || y==vec[1]) && dist>d)
                dist=d,idx=i;
            i++;
        }
        return idx;
    }
};