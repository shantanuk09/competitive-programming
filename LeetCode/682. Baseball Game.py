# LeetCode 682. Baseball Game
class Solution:
    def calPoints(self, ops: List[str]) -> int:
        arr = []
        for char in ops : 
            if char == 'C' : arr.pop()
            elif char == 'D' : arr.append(2 * arr[-1])
            elif char == '+' : arr.append(arr[-1] + arr[-2])
            else : arr.append(int(char))
        return sum(arr)