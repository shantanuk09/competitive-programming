# 2103. Rings and Rods
class Solution:
    def countPoints(self, rings: str) -> int:
        rod = 0
        arr = [""] * 10
        for i in range(0, len(rings), 2) : 
            color, index = rings[i], int(rings[i + 1])
            arr[index] += color
        for s in arr : 
            if "R" in s and "G" in s and "B" in s : rod += 1
        return rod