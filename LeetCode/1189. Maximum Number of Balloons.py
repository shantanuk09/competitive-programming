# LeetCode 1189. Maximum Number of Balloons
# Count frequency. 
class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        mapping = {}
        mapping['b'] = 0
        mapping['a'] = 0
        mapping['l'] = 0
        mapping['o'] = 0
        mapping['n'] = 0
        for c in text : 
            if c in mapping : mapping[c] += 1
            else : mapping[c] = 1
        return min(mapping['b'], mapping['a'], mapping['l'] // 2, mapping['o'] // 2, mapping['n'])