# LeetCode 852. Peak Index in a Mountain Array
class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        index = 0
        for i in range(1, len(arr) - 1) : 
            if arr[i] == max(arr) : index = i
        return index