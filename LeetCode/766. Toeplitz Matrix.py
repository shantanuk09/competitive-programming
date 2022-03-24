# LeetCode 766. Toeplitz Matrix
# Indexes on the diagonals differ by constant. 
class Solution:
    def isToeplitzMatrix(self, matrix: List[List[int]]) -> bool:
        mapping = {}
        for i in range(0, len(matrix)) : 
            for j in range(0, len(matrix[0])) : 
                if (i - j) not in mapping : mapping[i - j] = matrix[i][j]
                elif (i - j) in mapping and mapping[i - j] != matrix[i][j] : return False
        return True