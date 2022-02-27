# LeetCode 104. Maximum Depth of Binary Tree
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root == None : return 0
        else : return 1 + max(self.maxDepth(root.left), self.maxDepth(root.right))