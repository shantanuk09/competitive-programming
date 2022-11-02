# LeetCode 977. Squares of a Sorted Array
# Use a map.
class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        mapping, arr = [0] * 10005, []
        for n in nums : 
            mapping[abs(n)] += 1
        for i in range(0, len(mapping)) : 
            if mapping[i] > 0 : 
                for j in range(0, mapping[i]) : 
                    arr.append(i ** 2)
        return arr