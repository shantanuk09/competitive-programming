# LeetCode 104. Maximum Depth of Binary Tree
class Solution:
    def maxDepth(self, root: Optional[TreeNode], depth = 0) -> int:
        return 1 + max(self.maxDepth(root.left), self.maxDepth(root.right)) if root else 0