# LeetCode 1119. Remove Vowels from a String
class Solution:
    def removeVowels(self, s: str) -> str:
        ans = ""
        for e in s : 
            if e != 'a' and e != 'e' and e != 'i' and e != 'o' and e != 'u': 
                ans += e
        return ans

# Alternate 1
class Solution:
    def removeVowels(self, s: str) -> str:
        ans = ""
        for c in s : 
            if c not in 'aeiou' : 
                ans += c
        return ans

# Alternate 2
class Solution:
    def removeVowels(self, s: str) -> str:
        ans = []
        vowels = set('aeiou')
        for c in s : 
            if c not in vowels : 
                ans.append(c)
        return "".join(ans)