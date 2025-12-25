class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum=0,j=happiness.size()-1;
        sort(happiness.begin(),happiness.end());
        for(int i=0;i<k;i++){
            happiness[j]-=i;
            if(happiness[j]<0)
                happiness[j]=0;
            sum+=happiness[j];
            j--;
        }  
        return sum;
    }
};