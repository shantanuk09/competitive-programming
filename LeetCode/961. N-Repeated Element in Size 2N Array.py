# 961. N-Repeated Element in Size 2N Array
class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        for e in nums : 
            if nums.count(e) == len(nums) / 2 : 
                return e