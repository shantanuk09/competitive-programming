# LeetCode 896. Monotonic Array
class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        if all(nums[i] <= nums[i + 1] for i in range(0, len(nums) - 1)) : return True
        elif all(nums[i] >= nums[i + 1] for i in range(0, len(nums) - 1)) : return True
        else : return False