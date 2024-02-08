static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int coinChange(vector<int>& coins, int n) 
    {
        vector<int>dp(n+1,INT_MAX);
        dp[0]=0;
        for(int coin:coins)
        {
            for(int i=coin;i<=n;i++)
            {
                if(i - coin >= 0 && dp[i - coin] != INT_MAX)
                {
                dp[i]=min(dp[i],dp[i-coin]+1);
                }
            }
        }
        return (dp[n]==INT_MAX) ? -1: dp[n];        
    }
};