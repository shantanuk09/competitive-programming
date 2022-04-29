# LeetCode 2206. Divide Array Into Equal Pairs
# Using Counter.
class Solution:
    def divideArray(self, nums: List[int]) -> bool:
        c = Counter(nums)
        for n in nums :
            if c[n] % 2 != 0 : return False
        return True