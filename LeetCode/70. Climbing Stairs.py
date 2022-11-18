# LeetCode 70. Climbing Stairs
# Dynamic Programming. 
class Solution:
    def climbStairs(self, n: int) -> int:
        arr = [0, 1, 2]
        for i in range(3, n + 1) : 
            arr.append(arr[-1] + arr[-2])
        return arr[n] 