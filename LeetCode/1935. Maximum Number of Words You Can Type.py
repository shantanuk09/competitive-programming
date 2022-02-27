# LeetCode 1935. Maximum Number of Words You Can Type
class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        count = 0
        words = text.split(" ")
        for word in words : 
            canType = True
            for character in word : 
                if character in brokenLetters : canType = False
            if canType == True : count += 1
        return count

# Using set intersection.
class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        count = 0
        words = text.split(" ")
        for word in words : 
            if len(set(word).intersection(set(brokenLetters))) == 0 : count += 1
        return count