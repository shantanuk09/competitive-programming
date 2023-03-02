# LeetCode 2373. Largest Local Values in a Matrix
class Solution:
    def largestLocal(self, grid: List[List[int]]) -> List[List[int]]:
        n = len(grid)
        maxLocal = []
        for i in range(0, n - 2) : 
            maxLocal.append([])
            for j in range(0, n - 2) : 
                big = 0
                for k in range(i, i + 3) : 
                    for l in range(j, j + 3) : 
                        big = max(big, grid[k][l])
                maxLocal[-1].append(big)
        return maxLocal

        