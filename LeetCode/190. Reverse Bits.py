# LeetCode 190. Reverse Bits
# Standard implementation
class Solution:
    def reverseBits(self, n: int) -> int:
        reverse = 0
        power= 31
        while n :
            reverse += (n&1) << power
            n >>= 1
            power -= 1
        return reverse