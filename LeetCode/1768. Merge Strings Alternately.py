# 1768. Merge Strings Alternately
class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        lt = []
        for c1, c2 in itertools.zip_longest(word1, word2) : 
            if c1 and c2 : 
                lt.append(c1)
                lt.append(c2)
            elif c1 : 
                lt.append(c1)
            else :
                lt.append(c2)
        return "".join(lt)