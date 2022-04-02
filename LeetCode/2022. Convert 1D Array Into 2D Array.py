# LeetCode 2022. Convert 1D Array Into 2D Array
class Solution:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:
        if m * n != len(original) : return []
        arr, index = [[0 for i in range(n)] for j in range(m)], 0
        for i in range(0, m) : 
            for j in range(0, n) : 
                arr[i][j] = original[index]
                index += 1
        return arr