# LeetCode 71. Simplify Path
# Use a stack.
class Solution:
    def simplifyPath(self, path: str) -> str:
        stack = []
        for portion in path.split("/") : 
            if portion == ".." : 
                if stack : stack.pop()
            elif portion == "." or not portion : continue
            else : stack.append(portion)
        final = "/" + "/".join(stack)
        return final