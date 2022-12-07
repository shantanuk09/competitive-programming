// LeetCode 994. Rotting Oranges
// DFS
class Solution{
public:
    int orangesRotting(vector<vector<int>>& grid){
        int m = grid.size(), n = grid[0].size();
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(grid[i][j] == 2) DFS(grid, i, j, 2, m, n);
        int minutes = 2;
        for(auto row : grid){
            for(auto cell : row){
                if(cell == 1) return -1;
                minutes = max(minutes, cell);
            }
        }
        return minutes - 2;
    }

    void DFS(vector<vector<int>> &grid, int i, int j, int minutes, int m, int n){
        if(i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0 || (grid[i][j] > 1 && grid[i][j] < minutes)) return;
        grid[i][j] = minutes;
        DFS(grid, i - 1, j, minutes + 1, m, n);
        DFS(grid, i + 1, j, minutes + 1, m, n);
        DFS(grid, i, j - 1, minutes + 1, m, n);
        DFS(grid, i, j + 1, minutes + 1, m, n);
    }
};    

