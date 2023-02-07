# LeetCode 1991. Find the Middle Index in Array
class Solution:
    def findMiddleIndex(self, nums: List[int]) -> int:
        n = len(nums)
        left, right = [0] * (n + 2), [0] * (n + 2)
        left[0], right[n - 1] = nums[0], nums[n - 1]
        for i in range(1, n) : 
            left[i] = left[i - 1] + nums[i]
        for i in range(n - 2, -1, -1) : 
            right[i] = right[i + 1] + nums[i]
        for i in range(0, n) : 
            if left[i - 1] == right[i + 1] : return i
        return -1