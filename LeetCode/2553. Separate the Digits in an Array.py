# LeetCode 2553. Separate the Digits in an Array
class Solution:
    def findDigits(self, n : int) -> List[int]:
        arr = []
        while n : 
            arr.append(n % 10)
            n //= 10
        return arr

    def separateDigits(self, nums: List[int]) -> List[int]:
        answer = []
        for n in nums : 
            digits = self.findDigits(n)
            for digit in reversed(digits) : 
                answer.append(digit)
        return answer

# Alternate.
class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:
        arr = []
        for n in nums : 
            for c in str(n) : 
                arr.append(ord(c) - ord('0'))
        return arr