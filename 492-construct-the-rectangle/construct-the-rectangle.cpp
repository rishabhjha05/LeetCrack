class Solution {
public:
    bool isPrime(int n){
        if(n==1)
            return false;
        for(int i=2;i<=sqrt(n);i++)
            if(n%i==0)
                return false;
        return true;
    }
    vector<int> constructRectangle(int area) {
        vector<int> sol(2);
        if(isPrime(area)){
            vector<int> vec={area,1};
            return vec;
        }
        int i=1;
        while(i<=sqrt(area)){
            if(area%i==0){
                sol[0]=area/i;
                sol[1]=i;
            }
            i++;
        }
        return sol;
        
    }
};