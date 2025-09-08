class Solution {
public:
    bool contain0(int n){
        if(n==0)
            return true;
        while(n>0){
            if(n%10==0)
                return true;
            n/=10;
        }
        return false;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int> sol;
        for(int i=1;i<n;i++){
            if(!contain0(i))
            {
                if(!contain0(n-i))
                {
                    sol.push_back(i);
                    sol.push_back(n-i);
                    break;
                }
            }
        }
        return sol;
    }
};