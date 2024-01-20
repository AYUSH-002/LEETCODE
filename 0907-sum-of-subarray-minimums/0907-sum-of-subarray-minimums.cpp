const int MOD = 1e9 + 7;

class Solution {
    inline int calcSum(vector<int>& a) {
        long long  sum = 0;
        for (auto& i : a)
            sum += (i % MOD) % MOD;
        return sum % MOD;
    }

public:
    int sumSubarrayMins(vector<int>& a) {
        vector<int> dp(a.size());
        stack<int>stk ;

        for (int i = 0; i < a.size(); i++) {
            while (!stk.empty() and a[stk.top()] > a[i])
                stk.pop();
            if (stk.empty())
                dp[i] = (i + 1) * a[i];
            else
                dp[i] = dp[stk.top()] + (i - stk.top()) * a[i];  

            dp[i] %= MOD ;
            stk.push(i);
        }

        return calcSum(dp);
    }
};