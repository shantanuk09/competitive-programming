# LeetCode 1608. Special Array With X Elements Greater Than or Equal X
class Solution:
    def specialArray(self, nums: List[int]) -> int:
        x = max(nums)
        p = min(nums)
        n = len(nums)
        nums.sort()
        for i in range(0, x + 1) : 
            if i < p and i == n : return i
            for j in range(0, n) : 
                if i <= nums[j] and n - j == i : return i
                elif i <= nums[j] and n - j > i : break
        return -1