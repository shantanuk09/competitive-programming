# LeetCode 1287. Element Appearing More Than 25% In Sorted Array
class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        n = len(arr)
        t = n // 4
        for e in arr :
            if arr.count(e) > n // 4 : return e