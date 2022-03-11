# LeetCode 1030. Matrix Cells in Distance Order
class Solution:
    def allCellsDistOrder(self, rows: int, cols: int, rCenter: int, cCenter: int) -> List[List[int]]:
        distance, arr = [], []
        for i in range(0, rows) : 
            for j in range(0, cols) :
                distance.append([i, j, abs(i - rCenter) + abs(j - cCenter)])
        distance.sort(key = lambda x : x[2])
        for point in distance : 
            arr.append([point[0], point[1]])
        return arr