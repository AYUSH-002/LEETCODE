static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int numSquares(int n) 
    {
        vector<int>res;
        for(int i=1;i<=n;i++)
        {
            int a=sqrt(i);
            if(a*a==i)
            {
                res.push_back(i);
            }
        }
        vector<int>dp(n+1,INT_MAX);
        dp[0]=0;
        for(int x:res)
        {
            for(int i=x;i<=n;i++)
            {
                dp[i]=min(dp[i],dp[i-x]+1);
            }
        }
        return dp[n];
    }
};