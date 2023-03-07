# LeetCode 2485. Find the Pivot Integer
class Solution:
    def pivotInteger(self, n: int) -> int:
        for i in range(1, n + 1) : 
            if i * (i + 1) == n * (n + 1) / 2 + i : return i
        return -1