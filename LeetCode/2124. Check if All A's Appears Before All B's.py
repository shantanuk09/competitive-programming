# 2124. Check if All A's Appears Before All B's
class Solution:
    def checkString(self, s: str) -> bool:
        c = 0
        for char in s : 
            if char == "a" and c == 0 : c = 0
            elif char == "b" and c == 0 : c = 1
            elif char == "a" and c == 1 : return False
        return True

# One liner.
class Solution:
    def checkString(self, s: str) -> bool:
        return "ba" not in s