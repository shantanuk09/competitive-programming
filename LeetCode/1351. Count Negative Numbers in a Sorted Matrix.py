# LeetCode 961. N-Repeated Element in Size 2N Array
def countNegatives(self, grid: List[List[int]]) -> int:
        m, n = len(grid), len(grid[0])
        r, c, count = 0, n - 1, 0
        while r < m and c >= 0 :
            if grid[r][c] < 0 :
                count += m - r
                c -= 1
            else :
                r += 1
        return count