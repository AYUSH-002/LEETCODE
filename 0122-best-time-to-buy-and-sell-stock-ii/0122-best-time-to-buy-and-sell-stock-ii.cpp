static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//         int buy=prices[0];
//         int sell=0;
//         for(int i=1;i<n;i++)
//         {
//             if(prices[i-1]<prices[i])
//             {
//                 sell+=(prices[i]-prices[i-1]);
//                 buy=prices[i-1];
//             }
//         }
//         return sell;
//     }
// };
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n <= 1) return 0;
        
        vector<int> dp(2, 0);
        
        dp[1] = -prices[0]; 
        
        for (int i = 1; i < n; ++i) {
            dp[0] = max(dp[0], dp[1] + prices[i]); 
            dp[1] = max(dp[1], dp[0] - prices[i]);
        }
        
        return dp[0]; 
    }
};