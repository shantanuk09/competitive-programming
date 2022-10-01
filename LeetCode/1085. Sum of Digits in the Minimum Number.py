# LeetCode 1085. Sum of Digits in the Minimum Number
class Solution:
    def sumOfDigits(self, nums: List[int]) -> int:
        n = min(nums)
        sum = 0
        while n : 
            sum += n % 10
            n //= 10
        if sum % 2 : 
            return 0
        else : 
            return 1