static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int minInsertions(string s) {
        ios_base::sync_with_stdio(true);
        string s2 = s;
        reverse(s.begin() , s.end());

        int n = s2.size();
        int m = s.size();

        vector<vector<int>> dp(n+1 , vector<int>(m+1 , 0));

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }

        return s.size() - dp[n][m];
    }
};