static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int paintWalls(vector<int>& cost, vector<int>& time) 
    {
        int n=cost.size();
        vector<int>dp(n+1,1e9);
        dp[0]=0;
        for(int i=0;i<n;i++)
        {
            for(int j=n;j>=0;j--)
            {
                dp[j]=min(dp[j],dp[max(j-time[i]-1,0)]+cost[i]);
            }
        }
        return dp[n];
    }
};