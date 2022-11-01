# LeetCode 35. Search Insert Position
# Standard Binary Search, return left instead of -1 in case of no match.
class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        left, right = 0, len(nums) - 1
        while left <= right : 
            middle = (left + right) // 2
            if nums[middle] == target : return middle
            elif nums[middle] < target : left = middle + 1
            else : right = middle - 1
        return left