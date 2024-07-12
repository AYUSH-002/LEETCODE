static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>xCount(n+1,vector<int>(m+1,0));
        vector<vector<int>>yCount(n+1,vector<int>(m+1,0));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                xCount[i+1][j+1]= xCount[i+1][j]+ xCount[i][j+1] - xCount[i][j]+(grid[i][j]=='X' ? 1:0);
                yCount[i+1][j+1]= yCount[i+1][j]+ yCount[i][j+1]- yCount[i][j]+(grid[i][j]=='Y' ? 1:0);
            }
        }
        int result=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(xCount[i+1][j+1]>0 && xCount[i+1][j+1]==yCount[i+1][j+1])
                {
                    result++;
                }
            }
        }
        return result;
    }
};