# LeetCode 67. Add Binary
class Solution:
    def addBinary(self, a: str, b: str) -> str:
        n = int(a, 2) + int(b, 2)
        return str(bin(n))[2:]