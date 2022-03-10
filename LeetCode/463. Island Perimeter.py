# LeetCode 463. Island Perimeter
class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        p, m, n = 0, len(grid), len(grid[0])
        for i in range(0, m) : 
            for j in range(0, n) : 
                if grid[i][j] and i + 1 >= m : p += 1
                elif grid[i][j] and grid[i + 1][j] == 0 : p += 1
                if grid[i][j] and i - 1 < 0 : p += 1
                elif grid[i][j] and grid[i - 1][j] == 0 : p += 1
                if grid[i][j] and j + 1 >= n : p += 1
                elif grid[i][j] and grid[i][j + 1] == 0 : p += 1
                if grid[i][j] and j - 1 < 0 : p += 1
                elif grid[i][j] and grid[i][j - 1] == 0 : p += 1
        return p