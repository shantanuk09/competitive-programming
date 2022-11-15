# LeetCode 268. Missing Number
# XOR
class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        missing = len(nums)
        for i in range(0, len(nums)) : 
            missing ^= i ^ nums[i]
        return missing 

# Gauss' Formula
class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        return n * (n + 1) // 2 - sum(nums)