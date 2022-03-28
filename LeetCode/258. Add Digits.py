# LeetCode 258. Add Digits
class Solution:
    def addDigits(self, num: int) -> int:
        while num >= 10 : 
            sum = 0
            while num : 
                sum += num % 10
                num //= 10
            num = sum
        return num