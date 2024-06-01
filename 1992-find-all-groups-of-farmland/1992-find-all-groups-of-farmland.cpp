class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int rows = land.size();
        int cols = land[0].size();
        vector<vector<int>> farmlands;

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                // Check if (i, j) is the start of a new farmland rectangle
                if (land[i][j] == 1 && (i == 0 || land[i - 1][j] == 0) && (j == 0 || land[i][j - 1] == 0)) {
                    //This if condition checks if the current cell (i, j) is the top-left corner of a new farmland 
                    //rectangle. It ensures that the current cell contains 1 (farmland), and there are no 1s 
                    //in the cells directly above or to the left of (i, j).
                    int bottom_row = i;
                    int right_col = j;

                    // Expand down to find the bottom boundary
                    while (bottom_row + 1 < rows && land[bottom_row + 1][j] == 1) {
                        ++bottom_row;
                    }
                    // Expand right to find the right boundary
                    while (right_col + 1 < cols && land[i][right_col + 1] == 1) {
                        ++right_col;
                    }
                    //These while loops expand the farmland rectangle downward (to find the bottom boundary) 
                    //and to the right (to find the right boundary) as long as there are contiguous 1s in 
                    //the respective directions.
                    farmlands.push_back({i, j, bottom_row, right_col});
                }
            }
        }

        return farmlands;
    }
};