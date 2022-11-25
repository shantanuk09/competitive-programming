# LeetCode 242. Valid Anagram
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
       return Counter(s) == Counter(t)