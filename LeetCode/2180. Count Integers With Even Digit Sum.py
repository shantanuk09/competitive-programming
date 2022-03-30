# LeetCode 2180. Count Integers With Even Digit Sum
class Solution:
    def sumDigits(self, n : int) -> int : 
        if n == 0 : return 0
        else : return (n % 10) + self.sumDigits(n // 10)
        
    def countEven(self, num: int) -> int:
        count = 0
        for i in range(1, num + 1) : 
            if self.sumDigits(i) % 2 == 0 : count += 1
        return count