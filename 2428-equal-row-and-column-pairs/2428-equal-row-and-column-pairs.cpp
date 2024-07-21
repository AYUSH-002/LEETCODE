static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>check=grid;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                check[i][j]=grid[j][i];
            }
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i]==check[j]) count++;
            }
        }
        return count;
    }
};