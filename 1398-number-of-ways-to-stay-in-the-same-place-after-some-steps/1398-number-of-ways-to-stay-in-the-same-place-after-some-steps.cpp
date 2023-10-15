static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int numWays(int steps, int len) 
    {
        if(len==1)
        {
            return 1;
        }
        len=min(steps/2+1,len);
        int mod= 1'000'000'007;
        vector<long>dp(len);
        dp[0]=1;
        while(steps--)
        {
            vector<long>res(len);
            for(int i=0;i<len;i++)
            {
                res[i]=dp[i];
                if(i-1>=0)
                {
                    res[i]+=dp[i-1];
                }
                if(i+1<len)
                {
                    res[i]+=dp[i+1];
                }
                res[i]=res[i]%mod;
            }
            dp=move(res);
        }
        return dp[0];
    }
};