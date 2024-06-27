static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int MOD=1000000007;
	int perfectSum(vector<int>& arr, int target)
	{
	    int n=arr.size();
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));
        dp[0][0] = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= target; j++) {
                if (arr[i - 1] <= j) {
                    dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - arr[i - 1]]) % MOD;
                } 
                else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        return dp[n][target];
	}
    int findTargetSumWays(vector<int>& arr, int d) {
        int totalSum=accumulate(arr.begin(),arr.end(),0);
        int target=(totalSum+d)/2;
        if ((totalSum + d) % 2 != 0 || totalSum < d) {
            return 0;
        }
        return target>=0 ? perfectSum(arr,target):0;
    }
};