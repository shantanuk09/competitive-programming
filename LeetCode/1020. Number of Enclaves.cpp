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
        int cells = 0;
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(i == 0 || j == 0 || i == m - 1 || j == n - 1) deleteLand(grid, i, j);
        for(auto row : grid)
            cells += count(row.begin(), row.end(), 1);
        return cells;
    }
};