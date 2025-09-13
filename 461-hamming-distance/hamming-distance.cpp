class Solution {
public:
    int hammingDistance(int x, int y) {
        int zor=x^y,count=0;
        while(zor>0){
            zor=zor & (zor-1);
            count++;
        }
        return count;
    }
};