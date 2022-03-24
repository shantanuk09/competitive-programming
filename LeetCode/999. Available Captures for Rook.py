# LeetCode 999. Available Captures for Rook
# Find rook and move in all 4 directions.
class Solution:
    def attack(self, board : List[List[str]], x : int, y : int, dx : int, dy : int) -> int : 
        while 0 <= x < 8 and 0 <= y < 8 and board[x][y] != 'B' : 
            if board[x][y] == 'p' : return 1
            x, y = x + dx, y + dy
        return 0
        
    def numRookCaptures(self, board: List[List[str]]) -> int:
        for i in range(0, 8) : 
            for j in range(0, 8) : 
                if board[i][j] == 'R' : return self.attack(board, i + 1, j, 1, 0) + self.attack(board, i - 1, j, -1, 0) + self.attack(board, i, j + 1, 0, 1) + self.attack(board, i, j - 1, 0, -1)