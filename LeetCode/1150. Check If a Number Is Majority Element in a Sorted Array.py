# LeetCode 2190. Most Frequent Number Following Key In an Array
class Solution:
    def isMajorityElement(self, nums: List[int], target: int) -> bool:
        count = 0
        n = len(nums)
        for e in nums : 
            if e == target : count += 1
        if count > n // 2 : return True
        else : return False