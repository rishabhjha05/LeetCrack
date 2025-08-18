class Solution {
public:
    int minSensors(int n, int m, int k) {
        int x=k+1,a=1,b=1;
        while(x<n-k)
        {
            x+=(2*k)+1;
            a++;
        }
        x=k+1;
        while(x<m-k)
        {
            x+=(2*k)+1;
            b++;
        }
        return a*b;

    }
};