# LeetCode 1958. Check if Move is Legal
# Use a dictionary.
class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        n = len(nums)
        arr = []
        mapping = {}
        for e in nums : 
            if e not in mapping : mapping[e] = 1
        for i in range(1, n + 1) : 
            if i not in mapping : arr.append(i)
        return arr