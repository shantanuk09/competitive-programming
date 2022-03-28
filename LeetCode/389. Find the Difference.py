# LeetCode 389. Find the Difference
class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        if len(s) < len(t) : s, t = t, s
        for c in s : 
            if s.count(c) != t.count(c) : return c