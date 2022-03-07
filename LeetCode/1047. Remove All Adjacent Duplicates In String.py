# LeetCode 1047. Remove All Adjacent Duplicates In String
class Solution:
    def removeDuplicates(self, s: str) -> str:
        stack = []
        for char in s :
            if len(stack) != 0 and stack[-1] == char : stack.pop()
            elif len(stack) == 0 or len(stack) != 0 and stack[-1] != char : stack.append(char)
        return "".join(stack)