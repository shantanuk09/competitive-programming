# LeetCode 136. Single Number
# XOR Trick.
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        answer = 0
        for e in nums : 
            answer ^= e
        return answer