# LeetCode 13. Roman to Integer
# Simulate
class Solution:
    def romanToInt(self, s: str) -> int:
        i = 0
        n = 0
        mapping = {"I" : 1, "V" : 5, "X" : 10, "L" : 50, "C" : 100, "D" : 500, "M" : 1000, "IV" : 4, "IX" : 9, "XL" : 40, "XC" : 90, "CD" : 400, "CM" : 900}
        while i < len(s) : 
            if i + 1 < len(s) and (s[i : i + 2] == "IV" or s[i : i + 2] == "IX" or s[i : i + 2] == "IX" or s[i : i + 2] == "XL" or s[i : i + 2] == "XC" or s[i : i + 2] == "CD" or s[i : i + 2] == "CM") : 
                n += mapping[s[i:i + 2]]
                i += 2
            else : 
                n += mapping[s[i]]
                i += 1
        return n