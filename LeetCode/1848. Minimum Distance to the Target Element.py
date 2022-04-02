# LeetCode 1848. Minimum Distance to the Target Element
class Solution:
    def getMinDistance(self, nums: List[int], target: int, start: int) -> int:
        small = math.inf
        for i in range(0, len(nums)) : 
            if nums[i] == target : small = min(small, abs(i - start))
        return small