# LeetCode 606. Construct String from Binary Tree
# DFS.
class Solution:
    answer = ""

    def helper(self, node : TreeNode) -> None:
        if not node : return
        self.answer += str(node.val)
        if node.left : 
            self.answer += "("
            self.helper(node.left)
            self.answer += ")"
        if node.right : 
            if not node.left : self.answer += "()"
            self.answer += "("
            self.helper(node.right)
            self.answer += ")"

    def tree2str(self, root: Optional[TreeNode]) -> str:
        self.helper(root)
        return self.answer