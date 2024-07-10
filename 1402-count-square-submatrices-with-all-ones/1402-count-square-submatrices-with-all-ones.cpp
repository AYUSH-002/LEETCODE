static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>dp(n,(vector<int>(m,0)));
        for(int i=0;i<m;i++){
            dp[0][i] = matrix[0][i];
        }
        for(int i=0;i<n;i++){
            dp[i][0] = matrix[i][0];
        }

        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[i][j]==1 && matrix[i-1][j-1]==1 && matrix[i-1][j]==1 && matrix[i][j-1])
                {
                    dp[i][j] = 1 + min({ dp[i-1][j-1], dp[i-1][j], dp[i][j-1] });
                }
                else if(matrix[i][j]==1)
                {
                    dp[i][j]=1;
                }
            }
        }

        int result =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                result += dp[i][j];
            }
        }
        return result;

    }
};