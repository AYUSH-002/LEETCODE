static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> newMat(n + 2, vector<int>(m + 2, -1));
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                newMat[i + 1][j + 1] = mat[i][j];
            }
        }

        vector<vector<int>> result;
        
        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < m + 1; j++) {
                if (newMat[i][j] > newMat[i][j - 1] && newMat[i][j] > newMat[i - 1][j] &&
                    newMat[i][j] > newMat[i][j + 1] && newMat[i][j] > newMat[i + 1][j]) {
                    result.push_back({i - 1, j - 1});
                    break;
                }
            }
        }

        return result.back();
    }
};
