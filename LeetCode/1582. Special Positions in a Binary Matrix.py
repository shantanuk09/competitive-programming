# LeetCode 1582. Special Positions in a Binary Matrix
# Find sum by each row and column.
class Solution:
    def numSpecial(self, mat: List[List[int]]) -> int:
        m, n, count, rowSum, colSum = len(mat), len(mat[0]), 0, [], []
        for row in mat : 
            rowSum.append(sum(row))
        for col in zip(*mat) : 
            colSum.append(sum(col))
        for i in range(0, m) : 
            for j in range(0, n) : 
                if mat[i][j] == 1 and rowSum[i] == colSum[j] == 1 : count += 1
        return count