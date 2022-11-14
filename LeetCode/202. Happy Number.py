# LeetCode 202. Happy Number
# Implement.
class Solution:
    def helper(self, n : int) -> int : 
        sum = 0
        while n : 
            sum = sum + ((n % 10) ** 2)
            n //= 10
        return sum

    def isHappy(self, n: int) -> bool :
        visited = {}
        while n not in visited : 
            visited[n] = 1
            n = self.helper(n)
            if n == 1 : return True
        return False