# LeetCode 448. Find All Numbers Disappeared in an Array
class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        n = len(nums)
        arr = []
        nums = set(nums)
        for i in range(1, n + 1) : 
            if i not in nums : arr.append(i)
        return arr