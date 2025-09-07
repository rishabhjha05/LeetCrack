class Solution {
public:
    vector<int> sumZero(int n) {
        int sum=0;
        vector<int> sol(n);
        for(int i=0;i<n-1;i++)
        {
            sol[i]=i+1;
            sum+=i+1;
        }
        sol[n-1]=-1*sum;
        return sol;
    }
};