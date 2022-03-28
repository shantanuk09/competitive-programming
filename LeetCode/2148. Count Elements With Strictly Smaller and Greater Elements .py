# LeetCode 283. Move Zeroes
class Solution:
    def countElements(self, nums: List[int]) -> int:
        count = 0
        small, big = min(nums), max(nums)
        for e in nums :
            if small < e < big : count += 1
        return count