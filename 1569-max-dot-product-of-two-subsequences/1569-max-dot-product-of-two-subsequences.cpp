static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int maxDotProduct(vector<int>& n1, vector<int>& n2) 
    {
        int n=n1.size();
        int m=n2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,INT_MIN));
        dp[0][0]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                int mul=n1[i-1]*n2[j-1];
                dp[i][j]=mul+max(0,dp[i-1][j-1]);
                dp[i][j]=max(dp[i][j],dp[i-1][j]);
                dp[i][j]=max(dp[i][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
};