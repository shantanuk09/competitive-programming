// LeetCode 200. Number of Islands
// DFS.
class Solution{
public:
    void deleteIsland(vector<vector<char>> &grid, int row, int col, int m, int n){
        if(row < 0 || row == m || col < 0 || col == n || grid[row][col] == '0') return;
        grid[row][col] = '0';
        deleteIsland(grid, row + 1, col, m, n);
        deleteIsland(grid, row - 1, col, m, n);
        deleteIsland(grid, row, col + 1, m, n);
        deleteIsland(grid, row, col - 1, m, n);
    }

    int numIslands(vector<vector<char>>& grid){
        int count = 0;
        int m = grid.size(), n = grid[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == '1'){
                    count++;
                    deleteIsland(grid, i, j, m, n);
                }
            }
        }
        return count;
    }
};
