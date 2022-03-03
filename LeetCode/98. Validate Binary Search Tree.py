# LeetCode 98. Validate Binary Search Tree
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        return self.checkBST(root)
    
    def checkBST(self, root : TreeNode, low = -math.inf, high = math.inf) : 
        if not root : return True
        if root.val <= low or root.val >= high : return False
        return self.checkBST(root.left, low, root.val) and self.checkBST(root.right, root.val, high)