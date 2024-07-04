static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n <= 1) return 0;

        vector<int> left_max_profit(n, 0);
        int min_price = prices[0];
        for (int i = 1; i < n; ++i) {
            min_price = min(min_price, prices[i]);
            left_max_profit[i] = max(left_max_profit[i-1], prices[i] - min_price);
        }

        vector<int> right_max_profit(n, 0);
        int max_price = prices[n-1];
        for (int i = n-2; i >= 0; --i) {
            max_price = max(max_price, prices[i]);
            right_max_profit[i] = max(right_max_profit[i+1], max_price - prices[i]);
        }

        int max_profit = 0;
        for (int i = 0; i < n; ++i) {
            max_profit = max(max_profit, left_max_profit[i] + (i+1 < n ? right_max_profit[i+1] : 0));
        }

        return max_profit;
    }
};
