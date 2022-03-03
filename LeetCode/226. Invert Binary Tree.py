# LeetCode 226. Invert Binary Tree
# Recursion
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if(root is None) : return None
        root.left, root.right = self.invertTree(root.right), self.invertTree(root.left)
        return root

# BFS
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        queue = collections.deque([root])
        while queue : 
            node = queue.popleft()
            if node : 
                node.left, node.right = node.right, node.left
                queue.append(node.left)
                queue.append(node.right)
        return root

# DFS
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        stack = [root]
        while stack :
            node = stack.pop()
            if node : 
                node.left, node.right = node.right, node.left
                stack.append(node.left)
                stack.append(node.right)
        return root