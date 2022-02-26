# 2057. Smallest Index With Equal Value
class Solution:
    def smallestEqual(self, nums: List[int]) -> int:
        for i in range(0, len(nums)) : 
            if i % 10 == nums[i] : 
                return i
        return -1