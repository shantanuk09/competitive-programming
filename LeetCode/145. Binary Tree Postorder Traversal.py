# LeetCode 145. Binary Tree Postorder Traversal
class Solution:
    def traverse(self, root : TreeNode, arr : List[int]) : 
        if root.left : self.traverse(root.left, arr)
        if root.right : self.traverse(root.right, arr)
        if root : arr.append(root.val)
        
    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        arr = []
        if root : self.traverse(root, arr)
        else : return []
        return arr