# LeetCode 1941. Check if All Characters Have Equal Number of Occurrences
class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        count = s.count(s[0])
        for c in s : 
            if s.count(c) != count : 
                return False
        return True