# LeetCode 217. Contains Duplicate
# Map One Pass
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        map = {}
        for n in nums : 
            if n in map : return True
            else : map[n] = 1
        return False

# Using set.
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        return len(nums) != len(set(nums))
