# LeetCode 1974. Minimum Time to Type Word Using Special Typewriter
class Solution:
    def minTimeToType(self, word: str) -> int:
        seconds, last = 0, 'a'
        for char in word : 
            time = abs(ord(char) - ord(last))
            seconds += min(time, 26 - time) + 1
            last = char
        return seconds