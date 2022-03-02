# LeetCode 821. Shortest Distance to a Character
class Solution:
    def shortestToChar(self, s: str, c: str) -> List[int]:
        n = len(s)
        occurence, arr = [], [n] * n
        for i in range(0, n) : 
            if s[i] == c : occurence.append(i)
        for index in occurence : 
            for i in range(0, n) : 
                arr[i] = min(arr[i], abs(index - i))
        return arr

# Calculate distance from left to right and then from right to left.
class Solution:
    def shortestToChar(self, s: str, c: str) -> List[int]:
        n = len(s)
        pos, arr = -n, [n] * n
        for i in range(0, n) : 
            if s[i] == c : pos = i
            arr[i] = i - pos
        for i in range(pos - 1, -1, -1) : 
            if s[i] == c : pos = i
            arr[i] = min(arr[i], pos - i)
        return arr