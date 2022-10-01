# LeetCode 1812. Determine Color of a Chessboard Square
class Solution:
    def squareIsWhite(self, coordinates: str) -> bool:
        if((ord(coordinates[0]) - ord('a') + 1 + int(coordinates[1])) % 2) : 
            return True
        else :
            return False;