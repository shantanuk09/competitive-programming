# LeetCode 965. Univalued Binary Tree
class Solution:
    def isUnivalTree(self, root: Optional[TreeNode]) -> bool:
        if not root : return True
        elif (root.left and root.val != root.left.val) or (root.right and root.val != root.right.val) : return False
        else : return self.isUnivalTree(root.left) and self.isUnivalTree(root.right)