static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix[0].size(); ++i) {
            int maxi = INT_MIN;
            for (int j = 0; j < matrix.size(); ++j) {
                maxi =max(maxi, matrix[j][i]);
            }
            for (int j = 0; j < matrix.size(); ++j) {
                if (matrix[j][i] == -1) {
                    matrix[j][i] = maxi;
                }
            }
        }
        return matrix;
    }
};