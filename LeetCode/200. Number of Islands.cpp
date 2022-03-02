// LeetCode 200. Number of Islands
class Solution {
public:
    void deleteIsland(vector<vector<char>> &grid, int m, int n, int i, int j){
        if(i < 0 || i == m  || j < 0 || j == n || grid[i][j] == '0') return;
        grid[i][j] = '0';
        deleteIsland(grid, m, n, i + 1, j);
        deleteIsland(grid, m, n, i - 1, j);
        deleteIsland(grid, m, n, i, j + 1);
        deleteIsland(grid, m, n, i, j - 1);
        
    } 
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size(), count = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    count++;
                    deleteIsland(grid, m, n, i, j);
                }
            }
        }
        return count;
    }
};