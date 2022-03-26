# LeetCode 1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence
class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        sentence = sentence.split()
        n = len(searchWord)
        for index, word in enumerate(sentence) : 
            if n <= len(word) and word[:n] == searchWord : return index + 1
        return -1