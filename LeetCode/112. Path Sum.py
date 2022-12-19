# LeetCode 112. Path Sum
# DFS.
class Solution:
    def generateSum(self, root, currentSum, pathSums) -> None : 
        if not root : return
        if not root.left and not root.right : 
            pathSums.append(currentSum + root.val)
            return
        self.generateSum(root.left, currentSum + root.val, pathSums)
        self.generateSum(root.right, currentSum + root.val, pathSums)

    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        if not root : return False
        pathSums = []
        self.generateSum(root, 0, pathSums)
        if targetSum in pathSums : return True
        else : return False       