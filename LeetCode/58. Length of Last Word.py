# LeetCode 58. Length of Last Word
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        length = 0
        for i in range(len(s) - 1, -1, -1) : 
            if s[i].isalpha() : length += 1
            elif length > 0 and s[i] == " " : break
        return length

# Alternate
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        words = s.split()
        return len(words[len(words) - 1])