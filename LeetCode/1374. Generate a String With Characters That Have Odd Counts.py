# 1374. Generate a String With Characters That Have Odd Counts
class Solution:
    def generateTheString(self, n: int) -> str:
        if n % 2 : 
            return "a" * n
        else : 
            return "a" * (n - 1) + "b"