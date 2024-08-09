
class Solution {
public:
    bool ismagical(vector<vector<int>>& grid, int r, int c) {
        vector<int>v(10,0);
        
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                int num = grid[r + i][c + j];
                
                if(num < 1 || num > 9 || v[num]>1) {
                    return false;
                } else {
                    v[num]++;
                }
            }
        }
        
        int rsum = grid[r][c] + grid[r][c + 1] + grid[r][c + 2];
        
        for(int i = 0; i < 3; i++) {
            if((grid[r + i][c] + grid[r + i][c + 1] + grid[r + i][c + 2]) != rsum) {
                return false;
            }
            if((grid[r][c + i] + grid[r + 1][c + i] + grid[r + 2][c + i]) != rsum) {
                return false;
            }
        }
        
        if((grid[r][c] + grid[r + 1][c + 1] + grid[r + 2][c + 2]) != rsum) {
            return false;
        }
        if((grid[r][c + 2] + grid[r + 1][c + 1] + grid[r + 2][c]) != rsum) {
            return false;
        }
        
        return true;
    }
    
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int cnt = 0;
        int rows = grid.size();
        int cols = grid.size(); 
        
        for(int i = 0; i <= rows - 3; i++) {
            for(int j = 0; j <= cols - 3; j++) {
                if(ismagical(grid, i, j)) {
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
};