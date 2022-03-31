# LeetCode 2190. Most Frequent Number Following Key In an Array
class Solution:
    def mostFrequent(self, nums: List[int], key: int) -> int:
        freq = 0
        mapping = {}
        for i in range(1, len(nums)) : 
            if nums[i - 1] == key : 
                if nums[i] not in mapping : mapping[nums[i]] = 1
                else : mapping[nums[i]] += 1
        for key, value in mapping.items() : 
            if value > freq : 
                freq, target = value, key
        return target