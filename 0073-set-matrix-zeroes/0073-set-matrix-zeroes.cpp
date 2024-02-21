static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<bool>> grid(n, vector<bool>(m, false));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    grid[i][j]=true;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0 && grid[i][j]==true)
                {
                    for(int k=0;k<n;k++)
                    {
                        matrix[k][j]=0;
                    }
                    for(int k=0;k<m;k++)
                    {
                        matrix[i][k]=0;
                    }
                }
            }
        }
    }
};