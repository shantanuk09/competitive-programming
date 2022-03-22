# LeetCode 1. Two Sum
# Dictionary One Pass.
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = {}
        for i in range(0, len(nums)) : 
            if (target - nums[i]) in map :
                return [map[target - nums[i]], i]
            map[nums[i]] = i
            