# LeetCode 704. Binary Search
# Standard Binary Search.
class Solution:
    def binarySearch(self, nums : List[int], left : int, right : int, target : int) -> int : 
        while left <= right : 
            middle = (left + right) // 2
            if nums[middle] == target : return middle
            elif nums[middle] < target : left = middle + 1
            else : right = middle - 1
        return -1
        
    def search(self, nums: List[int], target: int) -> int:
        return self.binarySearch(nums, 0, len(nums) - 1, target)