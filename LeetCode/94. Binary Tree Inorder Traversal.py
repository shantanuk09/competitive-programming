# LeetCode 94. Binary Tree Inorder Traversal
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        arr = []
        self.traverse(root, arr)
        return arr
    
    def traverse(self, root, arr) : 
        if root : 
            self.traverse(root.left, arr)
            arr.append(root.val)
            self.traverse(root.right, arr)