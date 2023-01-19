// LeetCode 1660. Correct a Binary Tree
class Solution{
public:
    unordered_map<int, bool> visited;

    TreeNode* correctBinaryTree(TreeNode* root){
        if(!root) return NULL;
        if(root -> right != NULL && visited[root -> right -> val]) return NULL;
        visited[root -> val] = true;
        root -> right = correctBinaryTree(root -> right);
        root -> left = correctBinaryTree(root -> left);
        return root;
    }
};