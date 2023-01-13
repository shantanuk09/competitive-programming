// LeetCode 980. Unique Paths III
// Brute Force DFS.
class Solution{
public:
    int DFS(vector<vector<int>>& grid, int i, int j, int steps, int totalSteps){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == -1) return 0;
        if(grid[i][j] == 2) return (steps == totalSteps) ? 1 : 0;
        grid[i][j] = -1;
        int paths = DFS(grid, i - 1, j, steps + 1, totalSteps) + DFS(grid, i + 1, j, steps + 1, totalSteps) + DFS(grid, i, j - 1, steps + 1, totalSteps) + DFS(grid, i, j + 1, steps + 1, totalSteps);
        grid[i][j] = 0;
        return paths;
    }
    
    int uniquePathsIII(vector<vector<int>>& grid){
        int x, y, totalSteps = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1) x = i, y = j;
                if(grid[i][j] != -1) totalSteps++;
            }
        }
        return DFS(grid, x, y, 1, totalSteps);
    }
};
