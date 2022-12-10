# LeetCode 26. Remove Duplicates from Sorted Array
# Two pointer.
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        n = len(nums)
        insertIndex = 1
        for i in range(1, n) : 
            if nums[i - 1] != nums[i] : 
                nums[insertIndex] = nums[i]
                insertIndex = insertIndex + 1
        return insertIndex
