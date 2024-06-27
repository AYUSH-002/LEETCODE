static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
	int solution(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,0);
        dp[0]=1;
        for(const int coin:coins)
        {
            for(int i=coin;i<=amount;i++)
            {
                dp[i]+=dp[i-coin];
            }
        }
        return dp[amount];
    }
    int change(int amount, vector<int>& coins)
    {
       return solution(coins,amount);
    }
};