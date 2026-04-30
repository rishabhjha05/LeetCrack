class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> vec;
        int f=max(grid[0][0],x)%min(grid[0][0],x);
        for(vector<int> v: grid){
            for(int ele : v)
                vec.push_back(ele);
        }
        sort(vec.begin(),vec.end());
        int ans=0,n=vec.size(),y=vec[n/2];
        for(vector<int> v: grid){
            for(int ele : v){
                if(abs(y-ele)%x!=0)
                    return -1;
                ans+=abs(y-ele)/x;
            }
        }
        return ans;
    }
};