class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count=0,i=0,n=costs.size();
        sort(costs.begin(),costs.end());
        while(i<n && coins>=0){
            if(coins>=costs[i])
                count++;
            coins-=costs[i++];
        }
        return count;
    }
};