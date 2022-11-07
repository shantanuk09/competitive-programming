# LeetCode 94. Binary Tree Inorder Traversal
# Art is an explosion.
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        return self.inorderTraversal(root.left) + [root.val] + self.inorderTraversal(root.right) if root else []