# LeetCode 1002. Find Common Characters
class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        characters = Counter(words[0])
        for word in words : 
            characters &= Counter(word)
        return list(characters.elements())