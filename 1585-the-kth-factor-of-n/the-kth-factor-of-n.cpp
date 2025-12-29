class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> factor;
        for(int i=1;i<=sqrt(n);i++)
            if(n%i==0)
                factor.push_back(i);
        int m=2*factor.size();
        if(n/factor[m/2-1]==factor[m/2-1])
            m--;
        if(k<=m/2)
            return factor[k-1];
        else if(k<=m)
            return n/factor[m-k];
        else
            return -1;
    }
};