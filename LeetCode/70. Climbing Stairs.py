# LeetCode 70. Climbing Stairs
#Dynamic Programming
class Solution:
    def climbStairs(self, n: int) -> int:
        arr = [0, 1, 2]
        for i in range(3, n + 1) : 
            arr.append(arr[-1] + arr[-2])
        return arr[n]

# Return the n-th Fibonacci number.
class Solution:
    def climbStairs(self, n: int) -> int:
        if n == 1 : return 1
        first, second = 1, 2
        for i in range(3, n + 1) : 
            third = first + second
            first = second
            second = third
        return second