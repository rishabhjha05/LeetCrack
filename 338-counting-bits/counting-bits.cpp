class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i=0;i<=n;i++){
            int count=0,x=i;
            while(x!=0){
                x&=(x-1);
                count++;
            }
            ans[i]=count;
        }
        return ans;
    }
};