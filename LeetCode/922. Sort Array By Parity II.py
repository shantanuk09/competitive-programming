# LeetCode 922. Sort Array By Parity II
class Solution:
    def sortArrayByParityII(self, nums: List[int]) -> List[int]:
        odd, even, arr = [], [], []
        for e in nums : 
            if e % 2 : odd.append(e)
            else : even.append(e)
        for e1, e2 in zip(even, odd) : 
            arr.append(e1)
            arr.append(e2)
        return arr

# Two pointer, one pass.
class Solution:
    def sortArrayByParityII(self, nums: List[int]) -> List[int]:
        i, j, n = 0, 1, len(nums)
        while i < n and j < n : 
            if nums[i] % 2 == 0 : i += 2
            elif nums[j] % 2 == 1 : j += 2
            else : nums[i], nums[j] = nums[j], nums[i]
        return nums