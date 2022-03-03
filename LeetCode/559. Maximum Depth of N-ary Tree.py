# LeetCode 559. Maximum Depth of N-ary Tree
# Recursion
class Solution:
    def maxDepth(self, root: 'Node') -> int:
        if root is None : return 0
        if root.children == [] : return 1
        depth = 0
        for child in root.children : 
            depth = max(depth, self.maxDepth(child))
        return depth + 1

# Even shorter.
class Solution:
    def maxDepth(self, root: 'Node') -> int:
        if root is None : return 0
        if root.children == [] : return 1
        return max([self.maxDepth(child) for child in root.children]) + 1