# LeetCode 1876. Substrings of Size Three with Distinct Characters
class Solution:
    def countGoodSubstrings(self, s: str) -> int:
        count = 0
        s = list(s)
        for i in range(2, len(s)) : 
            if s[i] != s[i - 1] and s[i - 1] != s[i - 2] and s[i] != s[i - 2] : count += 1
        return count