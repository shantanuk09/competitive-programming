# LeetCode 441. Arranging Coins
# Binary Search
class Solution:
    def arrangeCoins(self, n: int) -> int:
        c, arr = 0, []
        while True : 
            c += 1
            arr.append(c * (c + 1) // 2)
            if (c * (c + 1) // 2) > n : break
        left, right = 0, len(arr) - 1
        while left <= right : 
            middle = (left + right) // 2
            if arr[middle] == n : return middle + 1 
            elif arr[middle] < n : left = middle + 1
            else : right = middle - 1
        return left