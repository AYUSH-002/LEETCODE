static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=1;i<n;i++)
        {
            matrix[i][0]+=min(matrix[i-1][0],matrix[i-1][1]);
            matrix[i][n-1]+=min(matrix[i-1][n-2],matrix[i-1][n-1]);
            for(int j=1;j<n-1;j++)
            {
                int temp=min(matrix[i-1][j],matrix[i-1][j-1]);
                matrix[i][j]+=min(temp,matrix[i-1][j+1]);
            }
        }
        return *min_element(matrix[n-1].begin(),matrix[n-1].end());
    }
};