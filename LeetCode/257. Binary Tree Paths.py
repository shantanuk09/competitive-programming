# LeetCode 257. Binary Tree Paths
class Solution:
    def DFS(self, root : TreeNode, path : str, paths : List[str]) : 
        if root.left is None and root.right is None : 
            paths.append(path)
            return
        if root.left : self.DFS(root.left, path + "->" + str(root.left.val), paths)
        if root.right : self.DFS(root.right, path + "->" + str(root.right.val), paths)
        

    def binaryTreePaths(self, root: Optional[TreeNode]) -> List[str]:
        paths = []
        if root is None : return paths
        self.DFS(root, str(root.val), paths)
        return paths