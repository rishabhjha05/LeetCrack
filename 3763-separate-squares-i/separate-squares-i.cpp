class Solution {
public:
    double equal(vector<vector<int>>& sq, double mid){
        double upa = 0, ta = 0;

        for (auto &vec : sq) {
            double y = vec[1];
            double side = vec[2];
            double area = side * side;

            if (y >= mid)
                upa += area;
            else if (mid < y + side)
                upa += (y + side - mid) * side;

            ta += area;
        }

        double dna = ta - upa;
        return upa - dna;
    }

    double separateSquares(vector<vector<int>>& squares) {
        double dn = 1e18, up = -1e18;

        for (auto &vec : squares) {
            dn = min(dn, (double)vec[1]);
            up = max(up, (double)(vec[1] + vec[2]));
        }

        while (up - dn > 1e-6) {
            double mid = (dn + up) / 2;
            if (equal(squares, mid) > 0)
                dn = mid;
            else
                up = mid;
        }

        return (dn + up) / 2;
    }
};
