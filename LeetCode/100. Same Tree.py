# LeetCode 100. Same Tree
# DFS.
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        if not p and not q : return True
        if (p and not q) or (not p and q) : return False
        if p.val != q.val : return False
        return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)
        