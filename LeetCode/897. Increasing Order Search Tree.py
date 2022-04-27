# LeetCode 897. Increasing Order Search Tree
# Inorder Traveral and store nodes in a list.
class Solution:
    def inorderTraversal(self, root : TreeNode, arr : list[TreeNode]) :
        if root.left : self.inorderTraversal(root.left, arr)
        if root : arr.append(root)
        if root.right : self.inorderTraversal(root.right, arr)
        
    def increasingBST(self, root: TreeNode) -> TreeNode:
        arr = []
        self.inorderTraversal(root, arr)
        for i in range(0, len(arr) - 1) :
            arr[i].left = None
            arr[i].right = arr[i + 1]
        arr[len(arr) - 1].left = None
        arr[len(arr) - 1].right = None
        return arr[0]