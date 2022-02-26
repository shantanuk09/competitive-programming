# 1748. Sum of Unique Elements
class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        sum = 0
        for e in nums : 
            if nums.count(e) == 1 : 
                sum += e
        return sum