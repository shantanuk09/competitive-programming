# LeetCode 338. Counting Bits
# Brian Kernighan Algorithm
class Solution:
    def setBits(self, n : int) -> int : 
        count = 0
        while n :
            n &= (n - 1)
            count += 1
        return count

    def countBits(self, n: int) -> List[int]:
        arr = []
        for i in range(0, n + 1) : 
            arr.append(self.setBits(i))
        return arr

# Snek method
class Solution:
    def countBits(self, n: int) -> List[int]:
        arr = []
        for i in range(0, n + 1) :
            arr.append(i.bit_count())
        return arr