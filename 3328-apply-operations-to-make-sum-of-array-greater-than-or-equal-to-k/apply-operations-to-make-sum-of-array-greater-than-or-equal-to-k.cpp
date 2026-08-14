class Solution {
public:
    int dup(int sum,int reqsum){
        if(reqsum%sum==0)
            return reqsum/sum;
        return reqsum/sum+1;
    }
    int minOperations(int k) {
        int ans=INT_MAX;
        for(int i=1;i<=sqrt(k);i++){
            int reqOps=(i-1)+dup(i,k);
            ans=min(ans,reqOps);
        }

        return ans-1;
    }
};