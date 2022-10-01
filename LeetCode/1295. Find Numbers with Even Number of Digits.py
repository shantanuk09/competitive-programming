# LeetCode 1295. Find Numbers with Even Number of Digits
class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        count = 0
        for n in nums : 
            n = str(n)
            if len(n) % 2 == 0 : 
                count += 1
        return count