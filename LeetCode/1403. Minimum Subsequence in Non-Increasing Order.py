# LeetCode 1403. Minimum Subsequence in Non-Increasing Order
class Solution:
    def minSubsequence(self, nums: List[int]) -> List[int]:
        nums.sort()
        arr = []
        while sum(arr) <= sum(nums) :
            arr.append(nums.pop())
        return arr