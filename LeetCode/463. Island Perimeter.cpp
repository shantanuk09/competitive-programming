// 463. Island Perimeter
// Implementation.
class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        perimeter = 0
        for i in range(len(grid)) : 
            for j in range(len(grid[0])) : 
                if grid[i][j] == 1 :
                    if i - 1 < 0 or (i - 1 >= 0 and grid[i - 1][j] == 0) : perimeter += 1
                    if i + 1 == len(grid) or (i + 1 < len(grid) and grid[i + 1][j] == 0) : perimeter += 1
                    if j - 1 < 0 or (j - 1 >= 0 and grid[i][j - 1] == 0) : perimeter += 1
                    if j + 1 == len(grid[0]) or (j + 1 < len(grid[0]) and grid[i][j + 1] == 0) : perimeter +=1
        return perimeter 
