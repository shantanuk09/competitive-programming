# LeetCode 1317. Convert Integer to the Sum of Two No-Zero Integers
class Solution:
    def getNoZeroIntegers(self, n: int) -> List[int]:
        for i in range(1, n) : 
            if str(i).count("0") == 0 and str(n - i).count("0") == 0 : return [i, n - i]