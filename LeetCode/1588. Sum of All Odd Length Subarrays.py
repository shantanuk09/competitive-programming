# LeetCode 1588. Sum of All Odd Length Subarrays
class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        answer = 0
        n = len(arr)
        for i in range(0, n) : 
            answer += ceil((i + 1) * (n - i) / 2) * arr[i]
        return answer