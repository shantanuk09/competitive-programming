# LeetCode 1413. Minimum Value to Get Positive Step by Step Sum
class Solution:
    def nearestValidPoint(self, x: int, y: int, points: List[List[int]]) -> int:
        index, distance, found = 0, 100000, False
        for i in range(0, len(points)) : 
            if (x == points[i][0] or y == points[i][1]) and abs(x - points[i][0]) + abs(y - points[i][1]) < distance : 
                index = i
                distance = abs(x - points[i][0]) + abs(y - points[i][1])
                found = True
        if found : return index
        else : return -1