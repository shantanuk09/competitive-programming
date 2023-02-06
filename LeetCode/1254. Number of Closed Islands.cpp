// LeetCode 1254. Number of Closed Islands
class Solution{
public:
    void deleteIsland(vector<vector<int>> &grid, int row, int col){
        if(row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() || grid[row][col] == 1) return;
        grid[row][col] = 1;
        deleteIsland(grid, row + 1, col);
        deleteIsland(grid, row - 1, col);
        deleteIsland(grid, row, col + 1);
        deleteIsland(grid, row, col - 1);
    }

    int closedIsland(vector<vector<int>>& grid){
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(i == 0 || j == 0 || i == m - 1 || j == n - 1) deleteIsland(grid, i, j);
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 0){
                    count++;
                    deleteIsland(grid, i, j);
                }
            }
        }
        return count;
    }
};