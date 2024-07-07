static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
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