# LeetCode 2078. Two Furthest Houses With Different Colors
class Solution:
    def maxDistance(self, colors: List[int]) -> int:
        d = 0
        for i in range(0, len(colors)) : 
            if colors[i] != colors[0] : d = max(d, i)
        for i in range(len(colors) - 1, -1, -1) : 
            if colors[i] != colors[len(colors) - 1] : d = max(d, len(colors) - 1 - i)
        return d