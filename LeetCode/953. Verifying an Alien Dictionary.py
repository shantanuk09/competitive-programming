# LeetCode 953. Verifying an Alien Dictionary
# Use a mapping.
class Solution:
    def isSorted(self, word1 : str, word2 : str, priority : dict) -> bool : 
        for i in range((min(len(word1), len(word2)))) : 
            if priority[word1[i]] < priority[word2[i]] : return True
            elif priority[word1[i]] > priority[word2[i]] : return False
        return len(word1) <= len(word2)

    def isAlienSorted(self, words: List[str], order: str) -> bool:
        priority = {}
        for i in range(len(order)) : 
            priority[order[i]] = i
        for i in range(1, len(words)) : 
            if self.isSorted(words[i - 1], words[i], priority) == False : return False
        return True