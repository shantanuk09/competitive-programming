# LeetCode 1200. Minimum Absolute Difference
class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        d = math.inf
        lt = []
        arr.sort()
        for i in range(1, len(arr)) : 
            d = min(d, arr[i] - arr[i - 1])
        for i in range(1, len(arr)) : 
            if arr[i] - arr[i - 1] == d : lt.append([arr[i - 1], arr[i]])
        return lt