# LeetCode 20. Valid Parentheses
# Stack 
class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for c in s : 
            if c == '(' or c == '{' or c == '[' : stack.append(c)
            elif len(stack) and (c == ')' and (stack[-1] == '(') or (c == '}' and stack[-1] == '{') or (c == ']' and stack[-1] == '[')): stack.pop()
            else : return False
        return len(stack) == 0