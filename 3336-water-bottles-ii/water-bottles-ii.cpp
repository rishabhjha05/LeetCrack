class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int count=0,eb=0;
        while(numBottles || eb>=numExchange){
            while(eb>=numExchange){
                numBottles++;
                eb-=numExchange;
                numExchange++;
            }
            count+=numBottles;
            eb+=numBottles;
            numBottles=0;
        }
        return count;
    }
};