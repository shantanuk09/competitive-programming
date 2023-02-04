// LeetCode 1020. Number of Enclaves
class Solution{
public:
    void deleteLand(vector<vector<int>> &grid, int row, int col){
        int m = grid.size();
        int n = grid[0].size();
        if(row < 0 || row >= m || col < 0 || col >= n || grid[row][col] == 0) return;
        grid[row][col] = 0;
        deleteLand(grid, row + 1, col);
        deleteLand(grid, row - 1, col);
        deleteLand(grid, row, col + 1);
        deleteLand(grid, row, col - 1);
    }

    int numEnclaves(vector<vector<int>>& grid){
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for(int i = 0; i < m; i++){
            deleteLand(grid, i, 0);
            deleteLand(grid, i, n - 1);
        }
        for(int i = 0; i < n; i++){
            deleteLand(grid, 0, i);
            deleteLand(grid, m - 1, i);
        }
        for(auto row : grid)
            for(auto cell : row)
                if(cell == 1) count++;
        return count;
    }
};