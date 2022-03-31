# LeetCode 1869. Longer Contiguous Segments of Ones than Zeros
class Solution:
    def checkZeroOnes(self, s: str) -> bool:
        zero, one, maxZero, maxOne = 0, 0, 0, 0
        for char in s : 
            if char == '0' : 
                zero += 1
                maxZero = max(maxZero, zero)
                maxOne = max(maxOne, one)
                one = 0
            else : 
                one += 1
                maxOne = max(maxOne, one)
                maxZero = max(maxZero, zero)
                zero = 0
        if maxOne > maxZero : return True
        else : return False