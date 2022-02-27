# LeetCode 977. Squares of a Sorted Array
class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        arr, square = [0] * 10005, []
        for e in nums : 
            if e < 0 : e = -e
            arr[e] += 1
        for i in range(0, 10005) : 
            if arr[i] > 0 : 
                for j in range(0, arr[i]) : 
                    square.append(i * i)
        return square