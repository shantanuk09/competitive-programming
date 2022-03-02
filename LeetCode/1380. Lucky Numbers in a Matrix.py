# LeetCode 1380. Lucky Numbers in a Matrix
class Solution:
    def luckyNumbers (self, matrix: List[List[int]]) -> List[int]:
        m, n, lt, lt1, lt2 = len(matrix), len(matrix[0]), [], [], []
        for arr in matrix :
            lt1.append(min(arr))
        for i in range(0, n) :
            big = 0
            for j in range(0, m) : 
                big = max(big, matrix[j][i])
            lt2.append(big)
        for e in lt1 : 
            if e in lt2 : 
                lt.append(e)
        return lt

# One liner.
class Solution:
    def luckyNumbers (self, matrix: List[List[int]]) -> List[int]:
        return ({min(row) for row in matrix} & {max(col) for col in zip(*matrix)})