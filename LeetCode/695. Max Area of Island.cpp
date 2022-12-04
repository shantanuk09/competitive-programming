// LeetCode 695. Max Area of Island
// DFS
class Solution{
public:
    int deleteIsland(vector<vector<int>> &grid, int row, int col){
        if(row < 0 || row == grid.size() || col < 0 || col == grid[0].size() || grid[row][col] == 0) return 0;
        grid[row][col] = 0;
        return 1 + deleteIsland(grid, row + 1, col) + deleteIsland(grid, row - 1, col) + deleteIsland(grid, row, col + 1) + deleteIsland(grid, row, col - 1);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid){
        int maxArea = 0;
        for(int i = 0; i < grid.size(); i++)
            for(int j = 0; j < grid[0].size(); j++)
                if(grid[i][j] == 1) maxArea = max(maxArea, deleteIsland(grid, i, j));
        return maxArea;
    }
};
