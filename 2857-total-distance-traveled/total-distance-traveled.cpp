class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int dist=0;
        while(mainTank>=5 && additionalTank>=1){
            dist+=50;
            mainTank-=4,additionalTank-=1;
        }
        dist+=mainTank*10;
        return dist;
    }
};