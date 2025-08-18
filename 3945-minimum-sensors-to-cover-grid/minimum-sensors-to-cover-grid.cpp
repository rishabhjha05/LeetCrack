class Solution {
public:
    int minSensors(int n, int m, int k) {
        int a=1,b=1;
        a=n/((2*k)+1);
        if(n%(2*k+1) != 0)
            a++;
        b=m/((2*k)+1);
        if(m%(2*k+1) != 0)
            b++;
        if(a*b)
            return a*b;
        return 1;
    }
};