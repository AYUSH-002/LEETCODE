static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int solution(int i,int j,int n,int m,vector<vector<int>>& grid,vector<vector<int>>& dp)
    {
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==n-1 && j==m-1) return grid[i][j];
        else if(i==n-1)
        {
            return dp[i][j]=grid[i][j]+solution(i,j+1,n,m,grid,dp);
        }
        else if(j==m-1)
        {
            return dp[i][j]=grid[i][j]+solution(i+1,j,n,m,grid,dp);
        }
        return dp[i][j]=grid[i][j]+min(solution(i,j+1,n,m,grid,dp),solution(i+1,j,n,m,grid,dp));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solution(0,0,n,m,grid,dp);
    }
};