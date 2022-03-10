# LeetCode 1413. Minimum Value to Get Positive Step by Step Sum
class Solution:
    def minStartValue(self, nums: List[int]) -> int:
        small, s = 0, 0
        for n in nums : 
            s += n
            small = min(small, s)
        if small > 0 : return min(nums)
        else : return abs(small) + 1