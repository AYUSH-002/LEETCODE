static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int findMax(int startRow, int startCol, vector<vector<int>>& grid){
        int ans = INT_MIN;
        for(int a=startRow; a<(startRow+3); a++){
            for(int b=startCol; b<(startCol+3); b++){
                ans = max(ans, grid[a][b]);
            }
        }

        return ans;
    }

    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> result(n-2, vector<int>(n-2, 0));
        for(int i=0; i<n-2; i++){
            for(int j=0; j<n-2; j++){
                result[i][j] = findMax(i, j, grid);
            }
        }

        return result;
    }
};