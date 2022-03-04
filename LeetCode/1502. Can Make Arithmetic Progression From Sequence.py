# LeetCode 1502. Can Make Arithmetic Progression From Sequence
class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        n = len(arr)
        if n == 2 : return True
        arr.sort()
        for i in range(2, n) : 
            if arr[i - 2] + arr[i] != 2 * arr[i - 1] : return False
        return True