# LeetCode 1636. Sort Array by Increasing Frequency
class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        mapping = {}
        for n in nums :
            if n not in mapping : mapping[n] = 1
            else : mapping[n] += 1
        return sorted(sorted(nums, reverse = True), key = lambda x : mapping[x])