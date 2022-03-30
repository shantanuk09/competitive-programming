# LeetCode 1822. Sign of the Product of an Array
class Solution:
    def arraySign(self, nums: List[int]) -> int:
        negative = 0
        zero = False
        for e in nums : 
            if e < 0 : negative += 1
            if e == 0 : zero = True
        if zero : return 0 
        elif negative % 2 : return -1
        else : return 1