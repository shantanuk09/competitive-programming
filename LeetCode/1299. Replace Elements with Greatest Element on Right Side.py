# LeetCode 461. Hamming Distance
class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        big = -1
        for i in range(len(arr) - 1, -1, -1) :
            arr[i], big = big, max(big, arr[i])
        return arr