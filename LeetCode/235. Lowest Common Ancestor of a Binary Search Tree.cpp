// LeetCode 235. Lowest Common Ancestor of a Binary Search Tree
// Simplicity.
class Solution{
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
        if(p -> val > root -> val && q -> val > root -> val) return lowestCommonAncestor(root -> right, p, q);
        else if(p -> val < root -> val && q -> val < root -> val) return lowestCommonAncestor(root -> left, p, q);
        else return root;
    }
};
