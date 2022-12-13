# LeetCode 1984. Minimum Difference Between Highest and Lowest of K Scores
# Sort and calculate.
class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        nums.sort()
        minimumDifference = math.inf
        for i in range(k - 1, len(nums)) : 
            minimumDifference = min(minimumDifference, nums[i] - nums[i - k + 1])
        return minimumDifference
        