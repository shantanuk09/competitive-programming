# LeetCode 2194. Cells in a Range on an Excel Sheet 
class Solution:
    def cellsInRange(self, s: str) -> List[str]:
        arr = []
        startChar = ord(s[0])
        startNum = int(s[1])
        endChar = ord(s[3])
        endNum = int(s[4])
        for i in range(startChar, endChar + 1) : 
            for j in range(startNum, endNum + 1) : 
                arr.append(chr(i) + str(j))
        return arr