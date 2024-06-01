static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            if(grid[i][0]==0)
            {
                for(int j=0;j<m;j++)
                {
                    grid[i][j] = 1 - grid[i][j];
                }
            }
        }
        for(int j=0;j<m;j++)
        {
            int ones=0;
            for(int i=0;i<n;i++)
            {
                if(grid[i][j]==1) ones++;
            }

            if(ones<=n/2){
                for(int i=0;i<n;i++)
                {
                    grid[i][j] = 1 - grid[i][j];
                }
            }
        }
        int maxScore=0;
        for(int i=0;i<n;i++)
        {
            int temp=0;
            for(int j=0;j<m;j++)
            {
                temp+=(grid[i][j]*pow(2,m-j-1));
            }
            maxScore+=temp;
        }
        return maxScore;
    }
};