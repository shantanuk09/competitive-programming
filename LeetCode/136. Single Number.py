# LeetCode 136. Single Number
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        xor = 0
        for e in nums : 
            xor ^= e
        return xor