# LeetCode 283. Move Zeroes
class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        zero = nums.count(0)
        while nums.count(0) : 
            nums.remove(0)
        for i in range(0, zero) : 
            nums.append(0)

# Two Pointer
class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        zero = 0
        nonzero = 0
        while nonzero < len(nums) : 
            if nums[nonzero] != 0 : 
                nums[zero], nums[nonzero] = nums[nonzero], nums[zero]
                zero += 1
            nonzero += 1