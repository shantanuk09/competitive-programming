# LeetCode 374. Guess Number Higher or Lower
# Binary Search.
class Solution:
    def guessNumber(self, n: int) -> int:
        low = 1
        high = n
        while low <= high : 
            middle = low + (high - low) // 2
            result = guess(middle)
            if result == 0 : return middle
            elif result == -1 : high = middle - 1
            else : low = middle + 1
        return -1