class Solution {
public:
    vector<int> rLeft(vector<int>& vec,int k){
        vector<int> v;
        int n=vec.size();
        for(int i=k;i<n;i++)
            v.push_back(vec[i]);
        for(int i=0;i<k;i++)
            v.push_back(vec[i]);
        return v;
    }
    vector<int> rRight(vector<int>& vec,int k){
        vector<int> v;
        int n=vec.size();
        k=n-k;
        for(int i=k;i<n;i++)
            v.push_back(vec[i]);
        for(int i=0;i<k;i++)
            v.push_back(vec[i]);
        return v;
    }
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n=mat[0].size(),e=1;
        for(vector<int> vec: mat){
            if(e==1 && vec!=rLeft(vec,k%n))
                return 0;
            else if(e==0 && vec!=rRight(vec,k%n))
                return 0;
            e=!e;
        }
        return 1;

    }
};