static int speedup = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    return 0;
}();
class Solution
{
public:
    bool isPrime(int N)
    {
        if (N <= 1)
        {
            return false;
        }
        for (int i = 2; i < N; i++)
        {
            if (N % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    int findFactor(int N)
    {
        for (int i = 2; i < N; i++)
        {
            if (N % i == 0)
            {
                return i;
            }
        }
        return -1;
    }
    int minSteps(int n)
    {
        vector<int> dp(n + 1, 0);
        dp[1] = 0;
        for (int i = 2; i <= n; i++)
        {
            if (isPrime(i))
            {
                dp[i] = i;
            }
            else
            {
                if (i % 2 == 0)
                {
                    dp[i] = dp[2] + dp[i / 2];
                }
                else
                {
                    int factor = findFactor(i);
                    dp[i] = dp[factor] + dp[i / factor];
                }
            }
        }
        return dp[n];
    }
};
