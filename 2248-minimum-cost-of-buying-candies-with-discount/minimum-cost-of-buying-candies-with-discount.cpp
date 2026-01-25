class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int ans=0,n=cost.size(),i=n-1;
        while(i-2>=0){
            ans+=cost[i];
            ans+=cost[i-1];
            i-=3;
        }
        while(i>=0)
            ans+=cost[i--];
        return ans;
    }
};