# LeetCode 1133. Largest Unique Number
# Compare counters.
class Solution:
    def largestUniqueNumber(self, nums: List[int]) -> int:
        arr = [0] * 1001
        answer = -1
        for e in nums : 
            arr[e] += 1
        for i in range(0, len(arr)) : 
            if arr[i] == 1 : answer = i
        return answer