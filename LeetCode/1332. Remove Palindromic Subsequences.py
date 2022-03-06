# LeetCode 1332. Remove Palindromic Subsequences
# If string is a palindrome return 1, else return 2.
class Solution:
    def removePalindromeSub(self, s: str) -> int:
        if s == s[::-1] : return 1 
        else : return 2