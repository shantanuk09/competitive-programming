// LeetCode 1905. Count Sub Islands
// DFS
class Solution{
public:
    bool deleteIsland(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int row, int col){
        if(row < 0 || row == grid1.size() || col < 0 || col == grid1[0].size() || grid2[row][col] == 0) return true;
        grid2[row][col] = 0;
        bool north = deleteIsland(grid1, grid2, row - 1, col);
        bool south = deleteIsland(grid1, grid2, row + 1, col);
        bool east = deleteIsland(grid1, grid2, row, col + 1);
        bool west = deleteIsland(grid1, grid2, row, col - 1);
        return grid1[row][col] && north && south && east && west;
    }

    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2){
        int count = 0, m = grid1.size(), n = grid1[0].size();
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(grid2[i][j] == 1) count += deleteIsland(grid1, grid2, i, j);
        return count;
    }
};

