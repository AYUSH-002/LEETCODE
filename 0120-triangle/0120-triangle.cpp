static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int solution(int i,int j,int n,vector<vector<int>>& triangle,vector<vector<int>>&dp)
    {
        if(i==n-1)
        {
            return triangle[i][j];
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        return dp[i][j]=triangle[i][j]+min(solution(i+1,j,n,triangle,dp),solution(i+1,j+1,n,triangle,dp));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solution(0,0,n,triangle,dp);
    }
};