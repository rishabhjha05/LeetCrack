class Solution {
public:
    int minimumSum(int num) {
        vector<int> vec;
        while(num>0)
            vec.push_back(num%10),num/=10;
        sort(vec.begin(),vec.end());
        int a=0,b=0;
        a+=vec[0],a*=10;
        b+=vec[1],b*=10;
        a+=vec[2];
        b+=vec[3];
        return a+b;
    }
};