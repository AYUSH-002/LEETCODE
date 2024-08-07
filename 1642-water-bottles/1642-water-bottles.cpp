class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int result=0;
        while(numBottles>=numExchange)
        {
            result+=(numExchange*(numBottles/numExchange));
            numBottles=(numBottles%numExchange)+(numBottles/numExchange);
        }

        return numBottles>0 ? numBottles+result: result;
    }
};