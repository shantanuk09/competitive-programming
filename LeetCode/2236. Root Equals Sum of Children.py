# LeetCode 2236. Root Equals Sum of Children
class Solution:
    def checkTree(self, root: Optional[TreeNode]) -> bool:
        sum = 0
        if root.left : sum += root.left.val
        if root.right : sum += root.right.val
        if sum == root.val : return True
        else : return False