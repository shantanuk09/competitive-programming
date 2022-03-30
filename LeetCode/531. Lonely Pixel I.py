# LeetCode 531. Lonely Pixel I
# Find sum by each row and column.
class Solution:
    def findLonelyPixel(self, picture: List[List[str]]) -> int:
        m, n, count, rowSum, colSum = len(picture), len(picture[0]), 0, [], []
        for row in picture : 
            rowSum.append(row.count('B'))
        for col in zip(*picture) : 
            colSum.append(col.count('B'))
        for i in range(0, m) : 
            for j in range(0, n) : 
                if picture[i][j] == 'B' and rowSum[i] == colSum[j] == 1 : count += 1
        return count