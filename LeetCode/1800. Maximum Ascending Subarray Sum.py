# LeetCode 1800. Maximum Ascending Subarray Sum
class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        big = nums[0]
        arr = [nums[0]]
        for i in range(1, len(nums)) :
            if nums[i - 1] < nums[i] : arr.append(arr[-1] + nums[i])
            else : arr.append(nums[i])
            big = max(big, arr[i])
        return big