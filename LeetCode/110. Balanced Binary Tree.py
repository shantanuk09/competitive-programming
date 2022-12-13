# LeetCode 110. Balanced Binary Tree
# DFS.
class Solution:
    def getHeight(self, node : TreeNode) -> int:
        if not node : return 0
        left = self.getHeight(node.left)
        right = self.getHeight(node.right)
        if left == -1 or right == -1 or abs(left - right) > 1 : return -1
        return max(left, right) + 1

    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        return self.getHeight(root) != -1
        