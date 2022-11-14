# LeetCode 191. Number of 1 Bits
# Standard algorithm.
class Solution:
    def hammingWeight(self, n: int) -> int:
        count = 0
        while n : 
            count += n&1
            n >>= 1
        return count

# Brian Kernighan Algorithm
class Solution:
    def hammingWeight(self, n: int) -> int:
        count = 0
        while n : 
            n &= (n - 1)
            count += 1
        return count

# The Snek strikes again.
class Solution:
    def hammingWeight(self, n: int) -> int:
        return n.bit_count()