# LeetCode 243. Shortest Word Distance
class Solution:
    def shortestDistance(self, wordsDict: List[str], word1: str, word2: str) -> int:
        i, j, distance = -1, -1, math.inf
        for index, word in enumerate(wordsDict) : 
            if word == word1 : i = index
            elif word == word2 : j = index
            if i != -1 and j != -1 : distance = min(distance, abs(i - j))
        return distance