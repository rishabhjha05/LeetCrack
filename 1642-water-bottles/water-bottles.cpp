class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count=0,eb=0;
        while(numBottles || eb>=numExchange){
            numBottles+=eb/numExchange;
            eb=eb%numExchange;
            count+=numBottles;
            eb+=numBottles%numExchange;
            numBottles/=numExchange;
        }
        return count;
    }
};