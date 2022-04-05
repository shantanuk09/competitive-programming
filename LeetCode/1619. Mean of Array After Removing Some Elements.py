# LeetCode 1619. Mean of Array After Removing Some Elements
class Solution:
    def trimMean(self, arr: List[int]) -> float:
        n = len(arr)
        arr.sort()
        f = n // 20
        sumExclude = 0
        for i in range(0, n) : 
            if 0 <= i < f or n - f <= i < n : sumExclude += arr[i]
        return (sum(arr) - sumExclude) / (n - 2 * f)