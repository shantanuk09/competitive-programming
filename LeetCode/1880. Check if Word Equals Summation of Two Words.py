# LeetCode 1880. Check if Word Equals Summation of Two Words
class Solution:
    def numericalValue(self, word : str) -> int : 
        value = 0
        for c in word : 
            value = value * 10 + (ord(c) - ord('a')) 
        return value
            
    def isSumEqual(self, firstWord: str, secondWord: str, targetWord: str) -> bool:
        if self.numericalValue(firstWord) + self.numericalValue(secondWord) == self.numericalValue(targetWord) : return True
        else : return False