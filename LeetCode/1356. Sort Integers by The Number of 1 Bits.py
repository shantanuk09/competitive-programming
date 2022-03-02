# LeetCode 1356. Sort Integers by The Number of 1 Bits
class Solution:
    def sortByBits(self, arr: List[int]) -> List[int]:
        return sorted(arr, key = lambda x : (bin(x).count('1'), x))