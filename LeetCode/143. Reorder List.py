# LeetCode 143. Reorder List
class Solution:
    def reverseString(self, s: List[str]) -> None:
        for i in range(0, len(s) // 2) : 
            s[i], s[len(s) - 1 - i] = s[len(s) - i - 1], s[i]