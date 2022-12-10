# LeetCode 283. Move Zeroes
# Two pointer.
class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        insertIndex = 0
        for i in range(0, len(nums)) : 
            if nums[i] != 0 : 
                nums[i], nums[insertIndex] = nums[insertIndex], nums[i]
                insertIndex += 1