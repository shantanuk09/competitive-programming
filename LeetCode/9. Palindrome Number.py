# LeetCode 9. Palindrome Number
# Simulate
class Solution:
    def reverse(self, x : int) -> int:
        rev = 0
        while x : 
            rev = rev * 10 + (x % 10)
            x //= 10
        return rev

    def isPalindrome(self, x: int) -> bool:
        if x < 0 : return False
        return x == self.reverse(x)