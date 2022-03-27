# LeetCode 1394. Find Lucky Integer in an Array
class Solution:
    def findLucky(self, arr: List[int]) -> int:
        lucky = -1
        mapping = {}
        for n in arr :
            if n in mapping : mapping[n] += 1
            else : mapping[n] = 1
        for key, value in mapping.items() :
            if key == value : lucky = max(lucky, key)
        return lucky