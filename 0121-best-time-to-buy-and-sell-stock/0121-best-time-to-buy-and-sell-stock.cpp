static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=prices[0];
        int sell=0;
        for(int i=1;i<n;i++)
        {
            if(buy>prices[i])
            {
                buy=prices[i];
            }
            if(prices[i]-buy>=sell)
            {
                sell=prices[i]-buy;
            }
        }
        return sell;
    }
};