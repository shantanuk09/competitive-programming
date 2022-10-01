# LeetCode 1304. Find N Unique Integers Sum up to Zero
class Solution:
    def sumZero(self, n: int) -> List[int]:
        lt = []
        for i in range(1, n // 2 + 1) : 
            lt.append(i)
            lt.append(-i)
        if n % 2 == 1 : 
            lt.append(0)
        return lt