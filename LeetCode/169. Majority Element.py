# LeetCode 169. Majority Element
# Sort and return middle element.
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums.sort()
        return nums[len(nums) // 2]