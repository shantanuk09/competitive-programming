# LeetCode 1837. Sum of Digits in Base K
class Solution:
    def sumBase(self, n: int, k: int) -> int:
        if n == 0 : 
            return 0
        sum = 0
        while n :
            sum += n % k
            n //= k
        return sum