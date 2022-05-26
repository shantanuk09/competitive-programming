# LeetCode 191. Number of 1 Bits
# Count bit wise.
class Solution:
    def hammingWeight(self, n: int) -> int:
        weight = 0
        while n : 
            if n&1 : weight += 1
            n >>= 1
        return weight

# Convert to binary and count.
class Solution:
    def hammingWeight(self, n: int) -> int:
        return bin(n).count("1")

# Fastest Method.
class Solution:
    def hammingWeight(self, n: int) -> int:
        weight = 0
        while n : 
            n &= (n - 1)
            weight += 1
        return weight