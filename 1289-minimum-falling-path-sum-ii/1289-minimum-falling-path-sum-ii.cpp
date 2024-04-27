class Solution {
public:
    int dp[201][201];
    int recursive(vector<vector<int>>& grid, int x, int y, int n, int m){
        if(x == n){
            return 0;
        }
        if(dp[x][y] != -1){
            return dp[x][y];
        }
        int ans = INT_MAX;
        for(int i = 0; i<m; i++){
            if(i == y){
                continue;
            }
            int a = recursive(grid, x+1, i, n, m) + grid[x][i];
            ans = min(ans, a);
        }
        // cout<<"for x: "<<x<<" ans: "<<ans<<"\n";
        return dp[x][y] = ans;
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        memset(dp, -1, sizeof(dp));
        int ans = INT_MAX;
        for(int i= 0; i<m; i++){
            ans = min(ans, recursive(grid, 1, i, n, m) + grid[0][i]);
        }
        return ans;
    }
};