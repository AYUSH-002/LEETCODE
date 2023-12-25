class Solution {
public:
    int numDecodings(string s) {
        vector<int> dp(s.size());
        dp[0] = (s[0] == '0' ? 0 : 1);
        for (int i = 1; i < s.size(); ++i){
            if (int num = stoi(s.substr(i - 1, 2)); num >= 10 && num <= 26){
                if (i - 2 >= 0)
                    dp[i] += dp[i - 2]; 
                else
                    ++dp[i];
            }
            if (s[i] != '0'){
                dp[i] += dp[i - 1];
            }
        }
        return dp.back();
    }
};