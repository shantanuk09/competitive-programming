# LeetCode 266. Palindrome Permutation
class Solution:
    def canPermutePalindrome(self, s: str) -> bool:
        odd = False
        mapping = {}
        for char in s : 
            if char not in mapping : mapping[char] = 1
            else : mapping[char] += 1
        for char, freq in mapping.items() : 
            if freq % 2 == 1 and odd == True : return False
            elif freq % 2 : odd = True
        return True