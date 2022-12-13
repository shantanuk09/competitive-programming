# LeetCode 543. Diameter of Binary Tree
# DFS.
class Solution:
    diameter = 0

    def longestPath(self, node : TreeNode) -> int:
        if not node : return 0
        leftPath = self.longestPath(node.left)
        rightPath = self.longestPath(node.right)
        self.diameter = max(self.diameter, leftPath + rightPath)
        return 1 + max(leftPath, rightPath)


    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.longestPath(root)
        return self.diameter
         