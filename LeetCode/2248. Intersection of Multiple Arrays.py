# LeetCode 2248. Intersection of Multiple Arrays
# Using set intersection.
class Solution:
    def intersection(self, nums: List[List[int]]) -> List[int]:
        common = set(nums[0])
        for num in nums : 
            common = common & set(num)
        return sorted(list(common))

# Using a mapping.
class Solution:
    def intersection(self, nums: List[List[int]]) -> List[int]:
        m = len(nums)
        arr = []
        mapping = dict()
        for array in nums : 
            for e in array : 
                if e in mapping : mapping[e]  += 1
                else : mapping[e] = 1
        for key, value in mapping.items() : 
            if value == m : arr.append(key)
        return sorted(arr)