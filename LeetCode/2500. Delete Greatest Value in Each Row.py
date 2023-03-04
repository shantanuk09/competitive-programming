# LeetCode 2500. Delete Greatest Value in Each Row
class Solution:
    def deleteGreatestValue(self, grid: List[List[int]]) -> int:
        m = len(grid)
        n = len(grid[0])
        answer = 0
        for i in range(0, m) : 
            grid[i].sort()
        for i in range(0, n) : 
            big = 0
            for j in range(0, m) :
                big = max(big, grid[j][i])
            answer += big
        return answer