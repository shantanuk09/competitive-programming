# LeetCode 1893. Check if All the Integers in a Range Are Covered
class Solution:
    def isCovered(self, ranges: List[List[int]], left: int, right: int) -> bool:
        ranges.sort()
        for [start, end] in ranges : 
            for i in range(start, end + 1) : 
                if left == i : left += 1
        return left > right